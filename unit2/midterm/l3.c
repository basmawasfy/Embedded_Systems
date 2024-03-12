#include<stdio.h>
void prime_nums(int num1,int num2)
{
    printf("\nOutput : ");
    for(int i=num1;i<=num2;i++)
    {
        if(i==1) printf("%d ",1);
        if(i==2) printf("%d ",2);
        for(int j =2;j<=i;j++)
        {
            if(i%j==0)
              break;
            if(j==i-1)
            printf("%d ", i);  

        }
    }

}
void main()
{
    int num1, num2; 
    printf("Input: ");
    fflush(stdout);
    scanf("%d%d",&num1, &num2);
    prime_nums(num1, num2);
}