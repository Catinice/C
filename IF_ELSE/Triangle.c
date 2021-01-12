#include<stdio.h>

int main()
{
    int a,b,c;
    printf("ENTER FIRST SIDE OF THE TRIANGLE:\n");   
    scanf("%f", &a);
    printf("ENTER SECOND SIDE OF THE TRIANGLE:\n");
    scanf("%f", &b); 
    printf("ENTER THIRD SIDE OF THE TRIANGLE:\n");
    scanf("%f", &c);


    if(a == b && a == c){
    printf("This is an equilateral Triangle\n");
}
    if(a != b && b !=c && a != c){
    printf("This is an Scalene Triangle\n");
}
    if(a == b && a != c){
    printf("This is an Icosless Triangle\n");
}
    if(a == c && a != b){
    printf("This is an Icosless Triangle\n");
}
    if(b == c && b != a){
    printf("This is an Icosless Triangle\n");
}
    if(b == c && c != a){
    printf("This is an Icosless Triangle\n");
}
/*Commenting because Its giving weird shitty Errors
   else{
    printf("The Entered Value Is not a valid String!");
}
*/
    return 0;
}
