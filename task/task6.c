#include <stdio.h>

int main() {
    int x;
    printf("Enter the number of elements: ");
    scanf("%d", &x);

    int arr[x];

    // Input array elements
    for(int i = 0; i < x; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Reverse the array using swap
    int start = 0;
    int end = x - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    printf("\nReversed array: ");
    for(int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
