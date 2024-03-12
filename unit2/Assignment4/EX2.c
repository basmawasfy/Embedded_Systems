#include<stdio.h>
/*calculate factorial of number using recursion*/
int Rec_factorial(int num)
{
    if(num==1) return 1;
    else return num * Rec_factorial(num-1);
}

void main()
{
    int num;
    printf("Enter an positive integer: ");
    scanf("%d", &num);
    printf("factorial of %d = %d", num, Rec_factorial(num));
}