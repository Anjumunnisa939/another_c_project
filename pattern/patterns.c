// #include <stdio.h>
// int main(){
//     int n;
//     printf("number of rows:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
//probems******
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of rows:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=4;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of rows:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j+2){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// // }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of rows:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//        int a=1; 
//        for(int j=1;j<=i;j++){
//         printf("%d",a);
//         a=a+2;
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of rows:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//        // printf("the Ivalue is:%d\n",i);
//         for(int j=4;j>=i;j--){
//             printf("A B C D\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int a;
    printf("enter your character :\n");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        for(int j=1;j<=i;j++){
            int a=1;
            printf("%d\n",a+65);
            a++;
    

        
    }
        printf("\n");

    }
    return 0;
}