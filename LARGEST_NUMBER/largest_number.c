#include <stdio.h>
int main()
{
// Creating Variables..
int num1,num2,num3;
int a,b,;
//Taking Input From The User..
printf("Enter number 1 :\n");
printf("Enter number 2 :\n");
printf("Enter number 3 :\n");

scanf("%d", &num1);
scanf("%d", &num2);
scanf("%d", &num3);


// Using If and Else to Find largest Number
if(num1 > num2){
a = num1;
}


else{
a = num2;
}


if(a>num3){
b = a;
}
else{
b = num3;
}

// Printing The largest Number Entered by the user
printf("The largest Number Entered is :%d",b);
return 0;


}
