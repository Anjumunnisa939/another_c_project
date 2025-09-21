#include <stdio.h>
int main(){
int a;
printf("enter the number is :\n");
scanf("%d",&a);
if(a%5==0){
    printf("the number is divisible by 5 \n");
}
else{
    printf("the number is not divisible by 5 \n");
}
    return 0;
}