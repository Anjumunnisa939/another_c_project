#include <stdio.h>
#include <limits.h>
int main(){
    int x,y,z,m;
    printf("enter  the value:\n");
    scanf("%d %d %d %d",&x,&y,&z,&m);
    int matrix[x][y];
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("enter the value of :\n");
        scanf("%d",&matrix[i][j]);
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         matrix[i][j]=__INT_MAX__;
         printf("enter the max%d %d %p\n",i,j, matrix[i][j]);
    }
}
return 0;
}