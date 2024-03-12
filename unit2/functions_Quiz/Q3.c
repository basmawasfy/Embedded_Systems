/*
 write a c function that reverse an input array  
*/

#include<stdio.h>

void Reverse_arr(int arr[],int size)
{
    
    printf("Output: ");
    for(int i=0;i<size;i++)
    {
        printf("%d, ",arr[size-1-i]);
    }
}
int main()
{
    int arr[100], size;
    
    printf("Size: ");
    fflush(stdout);
    scanf("%d",&size);
    printf("Input: ");
    fflush(stdout);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse_arr(arr, size);
    
return 0;
}


