// Ex5
// Write C Program to Find ASCII Value of a Character

#include <stdio.h>
void main(void)
{
	char character;
	printf( "Enter a charcter : ");
	fflush(stdout);
	scanf("%c", &character);
	printf( "ASCII value of %c = %d ", character, character);
	
}

