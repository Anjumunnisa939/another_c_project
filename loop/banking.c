#include <stdio.h>
#include<ctype.h>
int main(){
    char a[100];
    printf("what is your name:\n");
    scanf("%s",&a);
    int b;
    printf("enter your 4 digits number of atm:\n");
    scanf("%d",&b);
    for(int i=1;b>0;i++){
        if(b%2==0){
            printf("your canara bank account number is: %d\n", b);  
        break;
    }
    else if(b%3==0){
            printf("your sbi account number is: %d\n", b);
    break;}
else if(b%5==0){
    printf("your hdfc account number is: %d\n", b);
break;
}
else{ 
    printf("you are not eligible age\n");

    break;}


}
    return 0;
}