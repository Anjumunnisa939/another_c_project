// //the question is get set of pairs  of an elements in array is equal to 12
// #include <stdio.h>
// int main(){
//     int sum=0;
//     int x;
//     printf("enter the value of x\n");
//     scanf("%d",&x);
//     int target =12;
//      int arr[x];
//      for(int i=1;i<=x;i++){
//         scanf("%d\n",&arr[i]);
//      }
//      for(int i=1;i<=x;i++){
//         sum =arr[i]+
//         if(arr[i]=target){
//             printf("the number")
//         }
//      }
//      return 0;
// }
#include <stdio.h>

int main() {
    int a;
    printf("Enter how many values you want:\n");
    scanf("%d", &a);

    int arr[a];

    // Taking input
    for (int i = 0; i < a; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target = 12;  // we are checking pairs that sum to 12
    int found = 0;

    printf("\nPairs whose sum is %d:\n", target);

    // Check all pairs
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found that sum to %d\n", target);
    }

    return 0;
}
