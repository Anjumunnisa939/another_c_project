#include <stdio.h>
int main(){
   int a;
   printf("enter the value of A\n");
   scanf("%d",&a);
   int arr[a];
   for(int i=1;i<=a;i++){
    printf("the value of I of an %d\n",i);
    scanf("%d",&arr[i]);
    
   }
   for(int i=1;i<=a;i++){
      printf("the value of %d\n",arr[i]);
   
   }
   int n;
   printf("enter the value of n;\n");
   scanf("%d",&n);
   for(int i=a;i>=n;i--){
      printf("the valueof I is %d\n",arr[i]);
   }
for(int i=1;i<=a;i++){//multiplication of values
   printf("%d\n",arr[i]*arr[i+1]);
      
}
   return 0;

}