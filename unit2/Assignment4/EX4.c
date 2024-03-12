// c program to calculate the power of a number using recursion
#include<stdio.h>
int cal_power(int base, int power);

void main()
{
    int base_n, power_n;
    printf("Enter base number");
    scanf("%d", &base_n);
    printf("Enter power number(positive integer):");
    scanf("%d", &power_n);
    printf("%d^%d = %d", base_n, power_n, cal_power(base_n, power_n));


}

int cal_power(int base, int power)
{
   
    if(power !=0)
    {
        return (base * cal_power(base,power-1));
    }
    else 
    return 1;
}
