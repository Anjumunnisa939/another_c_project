#include <stdio.h>
int main()
{
    int n;
    printf("enter the number is:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}