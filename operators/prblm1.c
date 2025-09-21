// #include <stdio.h>
// int main(){
//     int count =0;
//     int n=1932589;
//     while(n%10!=0){
//         n=n/10;

//     printf("%d\n",n);

//     count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }

// problem
#include <stdio.h>
int main()
{
    int sum = 0;
    int lastdigit;
    printf("Enter a number: ");
    scanf("%d", &lastdigit);
    while (lastdigit % 10 != 0)
    {
        lastdigit = lastdigit / 10;
        printf("the last digit is %d\n", lastdigit);
        sum++;
        printf("the count is %d\n", sum);
        sum = sum + lastdigit;
        printf("total sum is%d\n", sum);
    }

    return 0;
}