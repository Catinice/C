#include<stdio.h>

int main()
{
    int a; 
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d", &a);
    
    if(a==0){
    printf("The number Is Zero!");
 }
    if(a>0){
    printf("The number is positive !");
}
if(a<0){
    printf("The number is Negative !");
}
    return 0;
}
