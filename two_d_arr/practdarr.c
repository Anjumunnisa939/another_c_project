#include <stdio.h>
int main(){
    int row;
    printf("enter the value of rows:\n");
    scanf("%d",&row);
    int column;
    printf("%enter the value of column:\n");
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
{
    for(int j=0;j<column;j++){
        printf("enter the values\n");
        scanf("%d",&arr[i][j]);
    }
}   
for(int i=0;i<row;i++)
{
    for(int j=0;j<column;j++){
        printf("[%d][%d]=%d\n",i,j,arr[i][j]);
    }
}
return 0; 
}