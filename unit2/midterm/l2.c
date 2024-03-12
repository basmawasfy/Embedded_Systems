#include<stdio.h>
void square_root(int num)
{
    int start =0, end= num, mid;
    float increment=0.1, squareR;
    // find integral part of square
    while(start<=end) 
    {
        mid=(start+end)/2;
        if(mid*mid == num)
        {
            squareR=mid;
            break;
        }
        else if (mid*mid < num)
        {
            squareR=start;
            start=mid+1;
        }    
        else
            end=mid-1;  
    }
    // find fractional part upto 3 decimal points
    for(int i=0;i<3;i++)
    {
        while(squareR*squareR<= num)
        {
            squareR+=increment;
        }
        squareR-=increment;
        increment/=10;

    }
    printf("Output: %f", squareR);
    

}
void main()
{
    int num;
    
    printf("Input: ");
    fflush(stdout);
    scanf("%d",&num);
    square_root(num);

}