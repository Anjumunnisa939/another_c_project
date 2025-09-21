// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter the number of rows:");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i;j++){
//             printf("");
//         }
//         for(int k=1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
int a;
printf("enter the number of rows:\n");
scanf("%d",&a);
for(int i=1;i<=a;i++){
    for(int j =a;j>=i;j--){
        printf(" *");
    }
    printf("\n");
}

return 0;
}