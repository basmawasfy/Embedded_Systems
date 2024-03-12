// c program to store information(name, roll and mark)of a student using structure
#include<stdio.h>
struct student
{
    char name[50];
    unsigned int roll;
    float marks;

}s;

void main()
{
    printf("Enter information of students:\n");
    printf("Enter name: ");
    fflush(stdout);
    gets(s.name);
    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &s.marks);

    printf("Displaying information \n");
    printf("name: %s\nRoll: %d\nMarks: %f", s.name,s.roll, s.marks);


    


}