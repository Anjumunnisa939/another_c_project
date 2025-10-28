#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // exist from 0 to n-1 index value
    printf("the value of the number is :%d\n", arr[4]);
    printf("the %d\n", arr[0]);
    arr[4]=55;
    printf("integer datatype is &it is changed to from before %d\n",arr[4]);
    arr[0]=33;
    printf("integer datatype is &it is changed to from before %d\n",arr[0]);
    float b[4]={3.1,3.3,4.4,5.5};
    printf("floating datatype value is  %f\n",b[3]);
    char c[5]={'a','b','c','d','e'};
    printf("character data type vaue is %c\n",c[3]);
    return 0;

}                             










