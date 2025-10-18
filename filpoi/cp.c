// #include <stdio.h>
// int main() {
//     int n, r;
//     printf("enter the value of n:\n");
//     scanf("%d", &n);
//     printf("enter the value of r:\n");
//     scanf("%d", &r);

//     int nfact = 1, rfact = 1, nrfact = 1;

//     for (int i = 2; i <= n; i++) {
//         nfact *= i;  // n!
//     }
//     for (int i = 2; i <= r; i++) {
//         rfact *= i;  // r!
//     }
//     for (int i = 2; i <= n - r; i++) {
//         nrfact *= i; // (n - r)!
//     }
//     int ncr = nfact / (rfact * nrfact);
//     printf("the value of ncr is %d", ncr);
//     return 0;
// } 
#include <stdio.h>
    int factorial(int x){
        int fact =1;
        for(int i =2;i<=x;i++){
            fact = fact *i;

        }
        return fact;
    }
    int main()
    {
int a= factorial(7);
printf("the factorial of a is %d",a);
    
   
return 0;
}

