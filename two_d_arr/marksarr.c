#include <stdio.h>
int main(){
    int x;
    printf("enter the value:\n");
    scanf("%d",&x);
    int y;
    printf("enter the value of y:\n");
    scanf("%d",&y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            int arr[i][j];
            printf("enter the value of array:\n");
            scanf("%d",&arr[i][j]);

        }
    }
    return 0;
}