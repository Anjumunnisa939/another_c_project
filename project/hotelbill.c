#include <stdio.h>
void veg(){
    printf("pulav alu=500\n veg biryani=250\n");
}
void nonveg(){
    printf("dam biryani=500\n chicken rools=635\n");
}
void empty(){
    printf("khatam\n");
}

int main(){
    int x;
    printf("the slater type number\n");  
    scanf("%d",&x);

    if(x==1){
        veg();

    }
    if(x==2){
        printf("the non veg");
    }
    else{
        printf("thank you for your visit\n");
    }
    return 0;
}