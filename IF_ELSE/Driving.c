#include<stdio.h>

int main()
{
    int a; 
    printf("ENTER YOUR AGE:");
    scanf("%d", &a);
    
    if(a>=18 && a<=50){
    printf("You are Eligible For Driving !");
 }
       else{
    printf("You are ineligible..");
}
    return 0;
}
