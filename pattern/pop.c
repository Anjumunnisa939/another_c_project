// #include <stdio.h>
// int main() {
//     int a;
//     printf("enter the number :\n");
//     scanf("%d",&a);
//     int b =1;
//     for(int i=1;i<=a;i++){
        
//         for(int j=1;j<=i;j++){
        
//             printf("%d ",b);
//             b=b+2;
//         }

//        printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a;
//     printf("enter the number :\n");
//     scanf("%d",&a);

//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             // if row is odd, start with 1
//             // if row is even, start with 0
//             if(i%2!=0){
//                 if(j%2!=0) printf("1");
//                 else printf("0");
//             }
//             else{
//                 if(j%2!=0) printf("0");
//                 else printf("1");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main(){
    int a;
    printf("enter your number of rows:\n");
    scanf("%d",&a);
    for(int i =4;i>=a;i--){
        for(int j=4;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}