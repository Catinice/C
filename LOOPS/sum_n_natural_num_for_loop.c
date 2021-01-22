#include<stdio.h>

int main()
{
    int i, n , sum = 0;
    scanf("%d", &n);
    for(int i; i <= n ; i++) {
        sum +=i;      
    }
    
    printf("The Value Of Sum Is :%d ", sum );
    return 0;
}