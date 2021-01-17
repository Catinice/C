#include<stdio.h>

int main()
{
    int phy, maths , che , total;
    printf("Enter Your Physics Marks:\n");
    scanf("%d",&phy);
    printf("Enter Your Chemistry Marks:\n");
    scanf("%d",&che);
    printf("Enter Your Maths Marks:\n");
    scanf("%d",&maths);
    
    total = phy + che + maths;

    if(total < 40 || maths < 33 ||che < 33 || phy < 33){
    printf("You are Failed ! ");
    }
    
    else
    {
    printf("You are passed !");
    }
  
    return 0;
}
