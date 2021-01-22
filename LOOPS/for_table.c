#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("********Multiplication table**********");


    for(int i = 0 ; i < 11; i++) {
        printf("%d\n", i*a);
    }
    return 0;
}