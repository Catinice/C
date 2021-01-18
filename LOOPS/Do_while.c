#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    do{
    printf("the value is %d \n",i); 
    i++;
    }while (i < n);

    return 0;
} 
