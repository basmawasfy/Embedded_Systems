#include<stdio.h>
// find area of a circle, passing arguments to macros.
#define Area(r) r*r*3.14
void main()
{
    float radius; 
    printf("enter the radius: ");
    scanf("%f", &radius);
    printf("Area= %f", Area(radius));


}