#include<stdio.h>
void swap(int *, int *);
int main()
{
   
    int n,m;
    printf("---------- Program To Swap Two Integers-----------\n\n");
    printf("Enter First Number:\n\n");
    scanf("%d",&n);
    printf("Enter Second Number:\n\n");
    scanf("%d",&m);
    
    
    printf("Numbers Before swapping:  %d And %d\n",n,m);
    
    swap(m,n);
    
    printf("Numbers After swapping:  %d And %d\n",n,m);

    
    return 0;
}

    void swap(int *n , int *m ){
    int tmp;
    tmp = *n;
    *n = *m;
    *m = tmp;
}
