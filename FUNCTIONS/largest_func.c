#include <stdio.h>
check(int,int,int);//function prototype
int main()
{

    int a,b,c,result;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    result=check(a,b,c);//function call
    printf("Biggest number is: %d\n",result);
//display the output on the screen
    return 0;
}
int check(int a,int b,int c){//function definition with parameter
if(a>b)
{
    if(a>c)
    return a;
    else
        return c;
}
else
{
    if(b>c)
        return b;
    else
        return c;
}
}