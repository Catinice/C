#include<stdio.h>

int main()
{
    int n, prime=1;
    printf("Enter Your number : ");
    scanf("%d",&n);
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            prime = 0;
            break;
        }
    }
    if(prime==0) {
        printf("%d is a composite Number",n);
    }
    else {
        printf("%d is an prime Number",n);
    }
    return 0;
}