// EX7
// Write Source Code to Swap Two Numbers without temp variable
#include <stdio.h>
void main(void)
{
    float a, b;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f", &b);
    a= a + b;
    b= a - b;
    a= a - b;
    printf("After swapping, value of a = %f", a);
    printf("\nAfter swapping, value of b = %f", b);

}