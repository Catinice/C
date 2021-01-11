#include<stdio.h>

int main()
{
    int a; 
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d", &a);
    
    if(a==0){
    printf("The number Is Zero!\n");
 }
    if(a>0){
    printf("The number is positive !\n");
}
    if(a<0){
    printf("The number is Negative !\n");
}

    else{
    printf("The Entered String is not A number");
    
}
    return 0;
}
