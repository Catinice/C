#include<stdio.h>
int check(int n);
int main()
{

    int n;
    printf("---------- Odd or even ?---------\n\n");
    printf("Enter Your Number:\n\n");
    scanf("%d",&n);

    check(n); // Function Call

    return 0;
}
int check(int n) { //function definition
    if(n%2==0) {
        printf("\n%d is an even number",n);
    }
    else {
        printf("\n%d is an odd number",n);
    }
}
