#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int i;
    scanf("%d", &i);
    printf("%d", (num& ~(1<<i-1)));
    return 0;
}
