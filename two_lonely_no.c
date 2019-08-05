#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[10];
    for(int i=0;i<n;i++)
    {
	scanf("%d", &a[i]);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^a[i];
    }
    int c=0;
    while(( x & 1 )==0)
    {
        x=x>>1;
        c++;
    }
    int s=pow(2,c);
    printf("s=%d\n",s);
    int t1=0;
    int t2=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]&s)==0)
            t1=t1^a[i];
        else
            t2=t2^a[i];
    }
    printf("%d %d", t1, t2 );
    return 0;
}
