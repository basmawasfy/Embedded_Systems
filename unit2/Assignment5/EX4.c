// c program to store information(name, roll and mark)of a student using structure
#include<stdio.h>
struct student
{
    char name[10];
    unsigned int roll;
    float marks;

};

void main()
{
    struct student arr[10];
    printf("Enter information of students:\n");
    fflush(stdout);
    for(int i=0; i<10;i++)
    {
        printf("\nEnter roll number %d: ", i+1);
        printf("\nEnter name: ");
        fflush(stdout);
        scanf("%s", &arr[i].name);
        printf("\nEnter marks: ");
        fflush(stdout);
        scanf("%f", &arr[i].marks);

    }
    

    printf("Displaying information of students\n");
    for(int i=0; i<10;i++)
    {
        printf("\ninformation of roll number %d: ", i+1);
        
        printf("\nname: %f", arr[i].name);
       
        printf("\nmarks: %f", arr[i].marks);
    }
}