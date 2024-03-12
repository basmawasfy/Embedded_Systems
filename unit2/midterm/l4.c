#include<stdio.h>
void reverse_num(int num)
{
    int reversed=0;
    while(num>0)
    {
        reversed=(reversed*10)+(num%10);
        num/=10;
    }
    printf("Output: %d", reversed);
}
void main()
{
    int num;
    
    printf("Input: ");
    fflush(stdout);
    scanf("%d",&num);
    reverse_num(num);

}