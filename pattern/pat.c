// #include <stdio.h>
// int main (){
//     int a;
//     printf("enter the number of rows:\n");
//     scanf("%d",&a);
//     for(int i=1;i<=3;i++){
//     for(int j=1;j<=a;j++){// yaha par loop n mnumber of time run hota hai  condition kitne bar hai utne baar hoga
//         printf("***\n");
//     }
//     printf("\n");
// }

//     return 0;

// // }
 #include <stdio.h>
int main()
{
    int n=3;
    //printf("enter the nummber\n:");
    //scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
           // printf("%d ", j);
            printf("*");
        }
printf("\n");
    }
    return 0;
}

