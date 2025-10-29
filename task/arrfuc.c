#include <stdio.h>
int main(){
     int sum =0;
    int a;
    printf("enter the values:\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<=a;i++){
        printf(" the value of I:%d \n",i);
        scanf("%d",&arr[i]);
        
    }
for(int i=0;i<=a;i++){
  printf("%d\n",arr[i]);

}
for(int i=0;i<=a;i++){
    if(arr[i]%2==0){
       
        printf("the number is even %d\n",arr[i]);
     sum =arr[i]+sum;
       printf("the sum of the even elements are %d\n",sum);
    }
    // else{
    //     printf("the number is odd %d\n",arr[i]);
    //      int odd =arr[i]+arr[i+1];
    //      printf("the odd sum is %d\n",odd);
    // }
}








    return 0;

}