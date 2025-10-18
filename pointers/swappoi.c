#include <stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("%d value of a after swapping\n",a);
    printf("%d value of b after swapping",b);
    return 0;
}

