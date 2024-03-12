#include<stdio.h>
// reverse words in string using pointers
void reverse(char* begin,char* end)
{
    char temp;
    while (begin < end) 
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverse_Words(char s[])
{
    char* word_begin = s;
    char* temp = s;
 
    // Reversing individual words as
    // explained in the first step
    while (*temp) 
    {
        temp++;
        if (*temp =='\0') 
        {
            reverse(word_begin,temp - 1);
        }
        else if (*temp == ' ') 
        {
            reverse(word_begin,temp - 1);
            word_begin = temp + 1;
        }
    } 
    // Reverse the entire string
    reverse(s, temp - 1);   

}
// using array
void reverse_string(char str[], int size)
{
    int i, j, k=0;
    char word[50];
    for(i=size-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            for(j=k-1;j>=0;j++)
            {
                printf("%c", word[j]);
            }
            printf(" ");
            k=0;
        }
        else
        {
            word[k]=str[i];
            k++;
        }
    }
    if(k!=0)
    {
        for(j=k-1;j>=0;j++)
            {
                printf("%c", word[j]);
            }
    }

}
void main()
{
    char str[1];
    printf("input:");
    gets(str);
    reverse_Words(str);
    printf("%s", str);
}