#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand()%100 +1;
    do {
        printf("Enter Your Number :\n");
        scanf("%d",&guess);
        if(number>guess) {
            printf("Higher Number Plox\n");
        }
        else if(guess>number) {
            printf("Lower Number Plox\n");
        }
        else {
            printf("Number Of attempts: %d\n",nguess);
        }
        nguess++;
    } while(number!=guess);
    return 0;
}