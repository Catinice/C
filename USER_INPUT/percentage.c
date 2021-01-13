#include<stdio.h>

int main()
{

/* 
This program Will tell The percentage according to the marks obtained out of maximum marks.
*/
    // Taking variables 
    float hin, eng, math, sci, ss, total, totalm, percentage,c;
    
    // Calculating Max marks.
    printf("Enter Max Marks Obtained In One Test:\n"); 
    scanf("%f",&total);
    totalm = 5*total;
    
    // Taking input of Marks Obtained.
    printf("Enter Marks In Subject 1 (Hindi for eg):\n");
    scanf("%f",&hin);
    
    printf("Enter Marks In Subject 2 (English for eg):\n");
    scanf("%f",&eng);
    
    printf("Enter Marks In Subject 3 (Maths for eg):\n");
    scanf("%f",&math);
    
    printf("Enter Marks In Subject 4 (Science for eg):\n");
    scanf("%f",&sci);
    
    printf("Enter Marks In Subject 5 (Social Science for eg): \n");
    scanf("%f",&ss);
    
    // Calculating Percentage.
    percentage = (hin + eng + math + sci + ss)*100 / totalm;
    printf("THE PERCENTAGE IS : %f", percentage);

    
    
    
    
    
    
    return 0;
}
