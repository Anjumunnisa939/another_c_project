#include <stdio.h>
int main(){
   int a;
   printf("enter the the number a:\n");
   scanf("%d",&a);
   if(a%5==0){
    if(a%3==0){
        if(a%15!=0){
        printf("the number which divisible by both 5 and 3\n");
        }
    }
    else{
        printf("the number is divisible by one thing\n");
    }
   }
   else{
    printf("the number is not divisible by any thing");
   }
   return 0;
}