#include<stdio.h>

int main()
{
    int i, n , sum = 0;
    scanf("%d", &n);
    while(i <= n) {
        sum +=i;
        i++;
              
    }
    
    printf("The Value Of Sum Is :%d ", sum );
    return 0;
}