#include<stdio.h>
// c function to return unique number in array with one loop
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void unique_num(int arr[], int size)
{
    // check unique number
    for(int i=0; i < size; ++i)
    {
        if(arr[i] != arr[i+1])
        {    
            if(i == 0 || arr[i] != arr[i-1])
                printf("%d ",arr[i]);
        }
    }
}

void main()
{
    int arr[100], size;
    
    printf("Size: ");
    fflush(stdout);
    scanf("%d",&size);
    printf("\nInput: ");
    fflush(stdout);
    for(int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    // sorting
    insertionSort(arr, size); 
    // check unique number in sorted array 
    unique_num(arr, size);
}