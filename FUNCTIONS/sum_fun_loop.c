#include<stdio.h>
int sum(a ,b);
int main(){
    int num1;
    int num2;
    int result;

    printf("Enter Number 1: \n");
    printf("Enter Number 2: \n");
    scanf("%d", &num1);
    scanf("%d",&num2);
    
    result = sum( num1 , num2 );
    printf("The sum is %d \n",result);
}
int sum(a , b){
    int result;
    result = (a + b); 
    return result;
}