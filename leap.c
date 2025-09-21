#include <stdio.h>
int main (){
    int a;
    printf("enter te year is\n:");
    scanf("%d",&a);
    if(a%4==0){// the year which is leap musyt and should divisible by 4 
        printf("the year is leap year:");

    } 
    else {
        printf("\n the year is not a leap year:");
    }
        return 0;
}