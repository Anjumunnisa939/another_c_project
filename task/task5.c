#include <stdio.h>

int main() {
    int n;

    // Step 1: Ask for array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array elements
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Assume first element is max
    int max = arr[0];

    // Step 4: Compare each element with max
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Step 5: Print the maximum number
    printf("Maximum number in the array is: %d\n", max);

    return 0;
}
