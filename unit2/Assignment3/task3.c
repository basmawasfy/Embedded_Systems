// EX3
// Find Ttanspose of matrix
#include<stdio.h>

void main(void)
{
    int arr[10][10], TranArr[10][10], rows, columns ;
    printf("Enter rows and columns of matrix: ");
    fflush(stdout);
    scanf("%d %d",&rows, &columns);
    printf("Enter elements ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<columns;j++)
        {
            printf("a%d%d: ",i+1, j+1);
            fflush(stdout);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<columns;j++)
        {
            printf("%d   ",arr[i][j]); 
        }
        printf("\n");
    }


    for(int i=0;i<columns;i++)
    {
        for(int j=0; j<rows;j++)
        {
            TranArr[i][j]=arr[j][i]; 
        }
    }

    printf("Transpose of matrix: \n");
    for(int i=0;i<columns;i++)
    {
        for(int j=0; j<rows;j++)
        {
            printf("%d   ",TranArr[i][j]); 
        }
        printf("\n");
    }




    

}

