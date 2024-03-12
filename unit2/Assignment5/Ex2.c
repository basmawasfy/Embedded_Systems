// c program to store information(name, roll and mark)of a student using structure
#include<stdio.h>
struct Distance
{

    float feet;
    float inch;

};
struct Distance d1, d2, sum;
void main()
{
     
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%f", &d1.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d1.inch);
    
    printf("Enter information for 2nd distance\n");
    fflush(stdout);
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%f", &d2.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    //1 feet =12 inch
    if(sum.inch>12.0)
    {
        sum.inch-=12.;
        ++sum.feet;
    }
    printf("sum of distances=%.2f\'-%.2f", sum.feet, sum.inch);
    
    


    


}