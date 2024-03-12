/*
 write a c program for swapping two arrays
 with different lenths.
*/
void swapArrs(int [], int [], int, int);

#include<stdio.h>

int main()
{
    int arrA[3]={1,2,3}, arrB[5]={5,6,7,8,9};
    swapArrs(arrA,arrB,3,5);
    for (int i = 0; i < 5; i++)
    {
        printf("A:%d   B:%d\n", arrA[i],arrB[i]);
    }


    return 0;
}

void swapArrs(int arr1[], int arr2[], int n1, int n2)
{
    int n= n1>n2 ? n1 : n2 ;
    for (int i = 0; i < n; i++)
    {
        arr1[i]=arr1[i]+arr2[i];
        arr2[i]=arr1[i]-arr2[i];
        arr1[i]=arr1[i]-arr2[i];
    }
    
}