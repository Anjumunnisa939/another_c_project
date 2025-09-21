#include <stdio.h>
int main(){
    int a;
    printf("enter the number is:");
    scanf("%d",&a);
    if(a<=90){
        printf("a grade");
    }
    else{
        if(a<=80){
            printf("b grade\n");
            
        }
        else{
            if(a<=70){
                printf("c grade\n");
            }
            else{
                if(a<=60){
                    printf("d grade\n");
                }
            }
        }
    }
    return 0;
}
