#include<stdio.h>

int main()
{
    int a;
    printf("Enter Your Number:");
    scanf("%d",&a);
   
    (a % 2 == 0) ? printf("NUM is divisible by 2") : printf("NUM is not divisible by 2");
    return 0;
}
