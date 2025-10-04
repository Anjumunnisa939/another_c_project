#include <stdio.h>
void india (){
    printf("india is developing country\n");
return;
}
void austrialia(){
    printf("i am in austrialia\n");
    //england();//call england function
        india();//call india function
return;
}
void england(){
    printf("i am in england\n");
    austrialia();//call austrialia function
    
    return;

}
void afganistan(){
    printf("This isE afganistan\n");
    england();//call england function
    return;
}

int main(){
    afganistan();//call england function
    return 0;
}
