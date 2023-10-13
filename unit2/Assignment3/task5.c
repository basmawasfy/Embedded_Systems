// EX5
// Search an element in an array
#include<stdio.h>

void main(void)
{

    int arr[100],n, number, location;
    
    printf("Enter no of the elements :");
    fflush(stdout);
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(int i=0;i<n;i++)
    {
            fflush(stdout);
            scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to be searched : ");
    fflush(stdout);
    scanf("%d",&number);

    

    for(int i=0;i<n;i++)
    {
        if(arr[i]==number)
        {
            location=i+1;
            break;
        }  
    }
    
    printf("Number found at the location = %d ", location);
    
    
}