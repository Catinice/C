#include<stdio.h>
int sum(int a , int b);
int main(){
    int num1;
    int num2;
    int result;

    scanf("Enter Number 1: \n" , &num1);
    scanf("Enter Number 2: \n" , &num2);
    
    result = sum( num1 , num2 );
    printf("The sum is %d \n",result);
    return 0;
}
int sum(int a , int b){
    int result;
    result = (a + b); 
    return result;
}