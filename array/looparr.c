#include <stdio.h>
int main()
{
    // int arr[5]={1,2,3,4,5};
    int n;
    printf("enter the vlaue of n:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the value N value %d \n", n);

    for (int i = 0; i <= n; i++)
    {
        printf("Enter value for position %d:\n ", i);
        scanf("%d", &arr[i]);
    
    }for(int i=0;i<=n;i++){
    printf("enter the value of you entered:%d value box is %d\n",i,arr[i]);
    }
    return 0;
}
