// swap two numbers without using third variable


// #include <stdio.h>
// int main (){
//     int a;
//     printf("enter value of a:");
//     scanf("%d",&a);
//     int b;
//     printf("enter value of b:");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;  
//     a=a-b;
//     printf("%d value of a after swapping\n",a);
//     printf("%d value of b after swapping",b);
//     return 0;

// }


// swap two numbers using function
// #include <stdio.h>
// void swap(int a,int b){
// int temp = a;
// a = b;
// b =temp;
// }
// int main (){
//     int a;
//     printf("enter value of a:");
//     scanf("%d",&a);
//     int b;
//     printf("enter value of b:");
//     scanf("%d",&b);
//     swap(a,b);
//     printf("%d value of a after swapping\n",a);
//     printf("%d value of b after swapping",b);
//     return 0;
// }
//scope of variables in C in loop wise
#include <stdio.h>
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d value of x after swapping\n",x);
    printf("%d value of y after swapping\n",y);
    return;
}
int main(){
    for(int i=0;i<=3;i++){
    int a;
    printf("enter value of a:\n");        
    scanf("%d",&a);
    int b;
    printf("enter value of b:\n");
    scanf("%d",&b);
    
    swap(a,b);
    // printf("%d value of a after swapping\n",a);
    // printf("%d value of b after swapping\n",b);
    
}
return 0;

}