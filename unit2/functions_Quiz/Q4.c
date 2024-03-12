/* 
   Write a c function to convert a decimal number stored as an ascii
   array to an unsigned integer
*/
#include<stdio.h>
void Ascii2Int(int arr[], int);
int main()
{ 
    int ascii_Arr[4]={0x30, 0x31, 0x33, 0x39};
    Ascii2Int(ascii_Arr, 4);
    for(int i=0; i<4;i++)
    {
        printf("%d  ", ascii_Arr[i]);
    }
    
return 0;
}

void Ascii2Int(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        arr[i]=arr[i]-48;

    }

}