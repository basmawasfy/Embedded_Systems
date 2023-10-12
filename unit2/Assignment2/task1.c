//EX7
// C Program to find factorial of a number

#include<stdio.h>

void main(void)
{
    int number;
    long long Factorial=1;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &number);
    if(number<0)
       printf("Error!!! Factorial of negative number doesn't exist.");
    else if(number==0)
       printf("Factorial = 1 ");
    else
    {
        while(number>1)
        {
            Factorial *=number;
            number--;
        }
        printf("Factorial = %d ",Factorial);
    } 

}
