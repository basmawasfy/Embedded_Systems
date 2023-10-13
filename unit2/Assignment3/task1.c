// EX1
// Find sum of two matrix of order 2*2 using multidimensiomnal arrays.
#include<stdio.h>

void main(void)
{
    int arr1[2][2], arr2[2][2] ;
    printf("Enter the elements of 1st matrix\n");
   
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("a%d%d: ",i+1, j+1);
            fflush(stdout);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    
    
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("a%d%d: ",i+1, j+1);
            fflush(stdout);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Sum of matrix: \n");
    
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("%d   ",arr1[i][j]+arr2[i][j]); 
        }
        printf("\n");
    }




    

}

