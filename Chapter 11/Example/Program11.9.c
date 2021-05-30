/**
page 383
program 11.9
Write a program to illustrate the use of structure pointer

*/

///program begin
#include<stdio.h>
#include<conio.h>

struct invent
{
    char *name[20];
    int number;
    float price;
};
//main() function begin

int main()
{
    struct invent product[3], *ptr;
    printf("\nINPUTE\n\n");

    for (ptr = product; ptr < product+3; ptr++ )
    {
        scanf("%s %d %f",ptr->name, &ptr->number, &ptr->price);
    }
    printf("\nOUTPUT\n\n");

    ptr = product;

    while(ptr < product+3)
    {
        printf("%-20s %5d %10.2f\n",
               ptr->name,
               ptr->number,
               ptr->price);

               ptr++;
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output

INPUTE

Firoz 12 12.2
Mahmud 78 54.5
Maliha 12 124.21

OUTPUT

Firoz                   12      12.20
Mahmud                  78      54.50
Maliha                  12     124.21

Process returned 0 (0x0)   execution time : 77.746 s
Press any key to continue.

*/
