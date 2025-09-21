#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a); // here scanf is used to take input from the user. and here we used &a to get the address of the variable
    printf("You entered: %d\n", a); // just we discuss in printf function topic
    return 0;
}