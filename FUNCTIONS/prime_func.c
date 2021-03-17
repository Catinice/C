#include<stdio.h>
int check(int);
int main()
{
    int n,prime;
    printf("\n\n Function : check whether a number is prime number or not :\n");
    printf("---------------------------------------------------------------\n");
    printf(" Input a positive number : ");
    scanf("%d",&n);
    
    prime = check(n);
    if(prime==1)
        printf(" The number %d is a prime number.\n",n);
    else
        printf(" The number %d is not a prime number.\n",n);
    return 0;
}
int check(int n)
{
    int a=2;
    while(a<n/2) {
        if(n%a==0){
            return 0;
           }
        else{
            a++;
           }
    }
    return 1;
}
