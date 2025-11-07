#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Finding sum of matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//this above is more easy
// #include <stdio.h>//this one type of code for add
// int main(){
//     int r,c,R,C;
//     printf(" enter the values:");
//     scanf("%d %d %d %d",&r,&c,&R,&C);
//     int  matrix[r][c];
//     int  matri_x[R][C];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("MATRIX 1 VALUES:\n");
//             scanf(" %d ",&matrix[i][j]);
//         }
//     }
//      for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("enter the value of value:%d %d=%d\n",i,j,matrix[i][j]);
   
//         }
//     }
//     for(int k=0;k<R;k++){
//         for(int m=0;m<C;m++){
//             printf("enter the value \n:");
//             scanf("%d",&matri_x[k][m]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             for(int k=0;k<R;k++){
//         for(int m=0;m<C;m++){
//         printf("enter the values:%d %d\n",matrix[i][j]+matri_x[k][m]);
//            }
//            }
//         }
//         }

// return 0;//ADDITION PF MATRIX

// }

