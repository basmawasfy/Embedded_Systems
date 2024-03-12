// c program to store information(name, roll and mark)of a student using structure
#include<stdio.h>
struct complex
{

    float real;
    float img;

};
struct complex num1, num2, sum;
void main()
{
     
    printf("for first complex num\n");
    fflush(stdout);
    printf("Enter real nd imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f", &num1.real, &num1.img);
    
    
    printf("for second complex num\n");
    fflush(stdout);
     printf("Enter real nd imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f", &num2.real, &num2.img);
    sum.real=num1.real+num2.real;
    sum.img=num1.img+num2.img;
    
    
    printf("sum of distances=%.2f+%.2f i", sum.real, sum.img);

}