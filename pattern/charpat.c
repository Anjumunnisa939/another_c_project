#include <stdio.h>
 int main(){
    int n;printf("enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j = 1;j<=n;j++){
            int pot=a+64;
            char cov = (char)pot;
            printf("%c",cov);
            a++;
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++) {
//         int a=1;
//         for(int j=1; j<=n; j++) {
//             int pot=a+64;
//             char cov = (char)pot;
//             printf("%c ", cov);   // <-- VERY IMPORTANT (%c not %d)
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
