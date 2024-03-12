//c function to count number of ones in binary number
#include<stdio.h>
void ones_count(short int num)
{
    int count=0;
    for(int i=0;i<16;i++)
    {
        if((num >>i)&1 ==1)
          count++;
    }
    printf("Output: %d", count);
}
void main()
{
    short int num;
    
    printf("Input: ");
    fflush(stdout);
    scanf("%d",&num);
    ones_count(num);

    
}