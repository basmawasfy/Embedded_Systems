#include<stdio.h>
/*reverse sentence using recursion*/

void reverse();
void main()
{
    
    printf("Enter a sentence: ");
    reverse();  
}
void reverse()
{
    char c;
    scanf("%c", &c);
    if(c != '\n')
    {
        reverse();
        printf("%c", c);
        
    }

}
