// EX2
// Calcuate Average Using Arrays
#include<stdio.h>

void main(void)
{

    
    float arr[100],sum=0.0;
    int n;
    printf("Enter the elements of matrix\n");
    fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            printf("Enter number: ");
            fflush(stdout);
            scanf("%f",&arr[i]);
        
    }
    for(int i=0;i<n;i++)
    {
            sum+=arr[i];
    }
    
    printf("Average = %f",sum/n);
    
    
}