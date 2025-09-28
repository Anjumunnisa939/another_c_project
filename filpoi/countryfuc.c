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
int main(){
    england();//call england function
    return 0;
}
