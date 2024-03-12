/*
 write a C function that returns 0 if a given number is a power of 3,
 otherwise return 1.
*/

#include<stdio.h>
#include<math.h>
int Is_power3 (int);
int main()
{
    int num;
    printf("Enter number: ");
    fflush(stdout);
    scanf("%d",&num);
    printf("%d",Is_power3(num));
    
return 0;
}
int Is_power3 (int num)
{
    double res=log10(num)/log10(3);
    if(res-(int)res == 0 )
        return 0;
    else 
        return 1; 
}