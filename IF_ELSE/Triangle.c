#include<stdio.h>

int main()
{
    int a,b,c;
    printf("ENTER FIRST SIDE OF THE TRIANGLE:\n");   
    scanf("%d", &a);
    printf("ENTER SECOND SIDE OF THE TRIANGLE:\n");
    scanf("%d", &b); 
    printf("ENTER THIRD SIDE OF THE TRIANGLE:\n");
    scanf("%d", &c);


    if(a==b==c){
    printf("This is an equilateral Triangle\n");
}
    if(a != b && b !=c){
    printf("This is an Scalene Triangle\n");
}
    if(a == b && a != c){
    printf("This is an Icosless Triangle\n");
}
    if(a == c && a != b){
    printf("This is an Icosless Triangle\n");
}

    else{
    printf("Ignore above message and Please Enter a Vaild string !");
}

    
    return 0;
}
