/**
page 331
program 10.3
Write a program to illustrate the comparison of structure variables
*/
struct class
{
    int number;
    char name[20];
    float marks;
};
///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x;
    struct class student1 = {111, "Rao", 72.50};
    struct class student2 = {222, "Reddy", 67.00};
    struct class student3;

    student3 = student2;

    x = ((student3.number == student2.number) && (student3.marks == student2.marks)) ? 1 : 0;

    if(x == 1)
    {
        printf("\nStudent2 and Student3 are same\n\n");
        printf("%d %s %f\n",student3.number, student3.name, student3.marks);
    }
    else
        printf("\n\nStudent2 and student3 are different\n\n");


    int size  = sizeof(student2);
    printf("%d",size);
	getch();
	return 0;
}
///main() end

///program end

/**
output

Student2 and Student3 are same

222 Reddy 67.000000

Process returned 0 (0x0)   execution time : 1.453 s
Press any key to continue.

*/
