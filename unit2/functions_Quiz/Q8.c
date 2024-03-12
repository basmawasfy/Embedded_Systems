/*
 write a function to return the index of Last occurrance of a number in a given array
*/
#include "stdio.h"
void find_lastindex(int arr[],int num);
int main()
{
int arr[10]={10,20,5,8,9,20,5,45,90,10};
int x;
printf("enter your search number ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
find_lastindex(arr,x);
}
void find_lastindex(int arr[],int num)
{
int i,k=-1;// initialize k=-1 if number not found return -1
for(i=0;i<10;i++)
{
if(num==arr[i])
k=i;
else
continue;

}
printf("index=%d",k);
}
