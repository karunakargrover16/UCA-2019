#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node* next;
};
void insert_at_beg(struct node** head, int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->val=val;
    n->next=*head;
    *head=n;
}
void insert_at_pos(struct node **head, int pos, int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->val=val;
    if(pos==1)
    {
        insert_at_beg(head, val);
        return;
    }
    struct node *curr=*head;
    struct node *prev=curr;
    int x=1;
    while(x<pos && curr->next!=NULL)
    {
        if(x==pos)
            break;
        x++;
        prev=curr;
        curr=curr->next;
    }
    if(pos>x)
    {
        printf("Invalid position entered");
        return;
    }
    struct node* temp=prev->next;
    prev->next=n;
    n->next=temp;
}
void insert_at_end(struct node** head, int val)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    struct node *curr=*head;
    n->val=val;
    n->next=NULL;
    if(*head == NULL)
    *head = n;
    else
    {
        while(curr->next!=NULL)
        {
        curr=curr->next;
        }
    }
    curr->next=n;
}
void del_from_beg(struct node** head)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node *curr=*head;
    n=curr->next;
    *head=n;
}
void del_from_pos(struct node **head, int pos)
{
    if(pos==1)
    {
        return del_from_beg(head);
    }
    struct node *curr=*head;
    struct node *prev=*head;
    int x=1;
    while(x<pos && curr->next!=NULL)
    {
        if(x==pos)
            break;
        x++;
        prev=curr;
        curr=curr->next;
    }
    if(pos>x)
    {
        printf("Invalid position entered");
        return;
    }
    struct node* temp=prev->next;
    prev->next=curr->next;
    free(temp);
}
void del_from_end(struct node** head)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node* curr=*head;
    if(curr->next==NULL)
    {
        n=curr->next;
        *head=n;
        return;
    }
    while(curr->next!=NULL && curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=NULL;
}

int main() 
{
    struct node* n=NULL;
    insert_at_beg(&n, 10);
    insert_at_beg(&n, 0);
    insert_at_end(&n, 30);
    insert_at_end(&n, 40);
    insert_at_end(&n, 50);
    insert_at_pos(&n, 3, 20);
    insert_at_pos(&n, 4, 30);
    del_from_pos(&n, 4);
    del_from_beg(&n);
    del_from_end(&n);
    
    struct node* curr=n;
    while(curr)
    {
        printf("%d\n",curr->val);
        curr=curr->next;
    }
	return 0;
}
