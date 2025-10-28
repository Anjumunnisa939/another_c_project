#include <stdio.h>
int main()
{
    // int x;
    // printf("the value of x;\n");
    // scanf("%d", &x);
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    int arr[a];
    for (int i = 1; i <= a; i++)
    {
        printf(" the value of I %d\n", i);
        printf("then value of array numbers I\n :");
        scanf("%d", &arr[i]);
    }
     for (int i = 1; i <= a; i++){
        printf("%d ",arr[i]);
        
     }
      for (int i = 1; i <= a; i++){
        if(arr[i]>35){
            printf("this is the students roll number passed %d\n",i);
        }
        else{
            if(arr[i]<35){
            printf("this failed students %d\n",i);
        }
    }
      }
      
 
return 0;
}