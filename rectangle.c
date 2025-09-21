#include <Stdio.h>
    int main(){
        int length ,breadth,area,perimeter;
        printf("enter the length :\n");
        scanf("%d",&length);
        printf("enter the breadth :\n");
        scanf("%d",&breadth);
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        if(area>perimeter){
            printf("The area is greater in rectangle as compare to perimeter of rectangle\n");

        }
       else if(perimeter>area){
            printf("The perimeter is greater in rectangle as compare to area of rectangle\n");
        }
    else{
        printf("both are equal");
    }
    return 0;
}