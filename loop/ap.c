// #include  <stdio.h>
// int main(){
//     int a;
//     printf("enter your wanted number:");
//     scanf("%d",&a);
//     for(int i=3;i<=a;i++){
//           printf("%d\n",i);
//         printf("%d\n",a);
       
//         a=a*4;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a;
//     printf("what is your series of number\n");
//     scanf("%d",&a);
//     int m=100;
//     for(int i=100;a>0;i--){
//         printf("when the value of I is %d\n",i);
//         printf("when the value of A is %d\n",a);
//         m=m-3;
//         printf("the value of m is %d\n",m);

//     }
//     return 0;
//}
#include <stdio.h>
int main(){
    int a;
    printf("enter your number :\n");
    scanf("%d",&a);
    for(int i=1;a>0;i++){
        printf("the value of a is %d\n",a);
        if(a%2==0){
            printf("your number is even\n");
        }
        else{
            printf("your number is odd\n");
        }
          a=a-3;
          break;

    }
    return 0;
}