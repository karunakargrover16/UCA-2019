#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    for(i=0;i<n;i++)
    {
	scanf("%d", &arr[i]);
    }
    int x=0;
    for(int i=0;i<7;i++)
    {
        x=x^arr[i];
    }
    printf("%d",x);
    return 0;
}
