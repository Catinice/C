#include<stdio.h>
    void area();
    int main()
{
    area();
    return 0;
}
    void area(){
    int a , result;
    printf("Enter The Side\n");
    scanf("%d", &a);
    result = a*a;
    printf("The Area is: %d", result);
    }