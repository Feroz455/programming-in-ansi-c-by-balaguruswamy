/**
page 329
program 10.2
Define a structure type struct personal that would contain person name
date of joining and salary. using this structure write a program to read this
information for one person from the keyboard and print the same on the screen
*/

///program begin
#include<stdio.h>
#include<conio.h>
struct personal
{
    char name[20];
    int day;
    char manth[10];
    int year;
    float salary;
};
//main() function begin

int main()
{
    struct personal person;
    printf("Input Values\n");
    scanf("%s %d %s %d %f",person.name, &person.day, person.manth, &person.year, &person.salary);
    printf("%s %d %s %d %.2f",person.name, person.day, person.manth, person.year, person.salary);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Input Values
DJ.BRAVO 10 january 1994 4500
DJ.BRAVO 10 january 1994 4500.000000
Process returned 0 (0x0)   execution time : 29.479 s
Press any key to continue.

*/
