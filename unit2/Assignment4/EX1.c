#include<stdio.h>
/*prime numbers between two intervals */
int is_prime(int num)
{
    int i=2;
    while(i<num)
    {
        if(num %i==0)
        {
            return 0;
        }
    i++; 
    }
    
    return 1;
    
}
void interval_prime(int num1, int num2)
{
    int i=num1+1;
    while(i< num2)
    {
        if(is_prime(i)==1)
        printf("%d ",i );
        i++;
    }
    

}


void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("prime numbers between %d and %d are :  ", num1, num2);
    interval_prime(num1, num2);
}