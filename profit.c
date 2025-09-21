#include <stdio.h>
int main()
{
    int cp;
    printf("enter the cost prize\n:");
    scanf("%d", &cp);
    int sp;
    printf("enter the selling prize:\n");
    scanf("%d", &sp);
    int profit = sp - cp;
    if (profit > 0)
    {
        printf("the profit is %d\n", profit);
    }
    if (profit < 0)
    {
        printf("the shop is loss with %d\n", profit);
    }
    if (sp > cp)
    {
        printf("the shop is in profit\n");
    }
    else
    {
        printf("the shop is in loss\n");
    }
    return 0;
}