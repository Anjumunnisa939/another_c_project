// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printf("my number is %d",arr[2]);
//     return 
// 0;
// // }
// #include <stdio.h>
// int main(){
//     int x;
//     printf("enter the value of x:\n");
//     scanf("%d",&x);
//     int y;
//       printf("enter the value of y:\n");
// scanf("%d",&y);
//     int arr[x][y];
//     for(int i=0;i<=x;i++){
//         for(int j=0;j<=y;j++){
//             int marks=arr[i][j];
//             printf("%d %d",arr[i][j]);
//             printf("enter the value of marks:\n");
//             scanf("%d",&marks);

//         }

//     }
//     return 0;
//}
#include <stdio.h>
int main(){
    
            int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int arr[i][j];
            
             printf("enter the values\n");
        scanf("%d ",&arr);
         }
    
        }
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
printf("the values of [%d][%d]=[%d]\n",i,j,arr[i][j]);
        }
    }
    return 0;
}