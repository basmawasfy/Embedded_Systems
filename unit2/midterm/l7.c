#include<stdio.h>
void sum_nums(int num)
{
   static int sum=0;
   sum+=num;
   if(num==0)
    printf("\nsum = %d ", sum);
   else
    sum_nums(--num);

}

void main()
{
    sum_nums(100);

}