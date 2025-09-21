#include <stdio.h>
int main() {
    int a;
    printf("enter your number:\n ");
    scanf("%d", &a);
    for(int i=1;i<=100;i++){
        if(i%2==0){
        continue;
printf("%d is even\n", i);
    }
    printf("%d is even\n", i);
}
printf("success");
    return 0;
}