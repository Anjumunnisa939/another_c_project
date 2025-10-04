#include <stdio.h>
int add(int x,int y){
return x+y;

}
int main(){
    int a;
    printf("enter the value of A:");
    scanf("%d",&a);
    int b;
    printf("enter the value of B:");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);
    return 0;
}