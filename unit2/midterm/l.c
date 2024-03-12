#include<stdio.h>
int sum_digits(int num)
{
   static int sum=0;
   int rem;
   if(num !=0)
   {
    rem =num%10;
    sum+=rem;
    sum_digits(num/10);
   }
   else
   {
    printf("Output: %d", sum);
   }
   
}
void main()
{
    int num;
    printf("Input: ");
    fflush(stdout);
    scanf("%d",&num);
    sum_digits(num);

}
