#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int number;
    srand(time(0));
    number = rand();
    printf("The number is %d", number);
    return 0;
}