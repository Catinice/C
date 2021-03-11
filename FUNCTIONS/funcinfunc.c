#include<stdio.h>
void hello();
void bye();
int main(){
    hello();
    bye();
}
void hello(){
    printf("Hello!\n");
    bye();
}
void bye(){
    printf("bye\n");
}