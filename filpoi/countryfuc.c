#include <stdio.h>
void india (){
    printf("india is developing country\n");

return;
}
void austrialia(){
    printf("i am in austrialia\n");
    india();
return;
}
void england(){
    printf("i am in england\n");
    austrialia();

}
int main(){
    england();
    return 0;
}