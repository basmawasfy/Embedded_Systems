// Ex2
// Find the lenth of  a string

#include<stdio.h>

void main(void)
{
    char str[200], i;
    printf("Enter a string: ");
    fflush(stdout);
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("Length of string: %d",i);

}