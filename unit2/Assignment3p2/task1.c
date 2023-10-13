// Ex1
// Find frequency of characters in a string

#include<stdio.h>

void main(void)
{
    char str[200], character, counter=0;
    printf("Enter a string:");
    fflush(stdout);
    gets(str);

    printf("Enter a character to find frequency:");
    fflush(stdout);
    scanf("%c",&character);

    for(int i=0;i<sizeof(str);i++)
    {
        if(character==str[i])
            counter++;

    }

    printf("Frequency of %c = %d",character, counter);

}