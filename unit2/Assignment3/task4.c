// EX4
// insert element in an array
#include<stdio.h>

void main(void)
{

    int arr[100],n, number, location, j;
    
    printf("Enter no of the elements :");
    fflush(stdout);
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(int i=0;i<n;i++)
    {
            fflush(stdout);
            scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to be inserted : ");
    fflush(stdout);
    scanf("%d",&number);

    printf("Enter the location : ");
    fflush(stdout);
    scanf("%d",&location);
    
    for(j=n;j>=location;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[j]=number;

    for(int i=0;i<=n;i++)
    {
        printf("%d  ",arr[i]);  
    }
    
    
    
    
}