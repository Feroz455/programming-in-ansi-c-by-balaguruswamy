/**
page 422
program 13.1
Write a program that uses a table of integers whose size will be specified
interactively at run time.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//main() function begin

int main(int argc,char *argv[])
{
    int *p, *table;
    int size;
    printf("\nWhat is the size of table?\n");
    scanf("%d",&size);
    printf("\n");

    /**--------------------Memory allocation-------------------*/
    if((table = (int*)malloc(size * sizeof(int))) == NULL)
    {
        printf("NO space Available\n\n");
        exit(1);
    }
    printf("\nAddress of the first byte is %u\n",table);
    /**Reading table values*/

    printf("\nInput table values\n");

    for(p = table; p < table + size; p++)
    {
        scanf("%d",p);
    }
    for(p = table+size - 1; p >= table; p--)
    {
        printf("%d is stored at address %u \n",*p, p);
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output

What is the size of table?
5


Address of the first byte is 11408512

Input table values
11 12 13 14 15
15 is stored at address 11408528
14 is stored at address 11408524
13 is stored at address 11408520
12 is stored at address 11408516
11 is stored at address 11408512

Process returned 0 (0x0)   execution time : 7.675 s
Press any key to continue.
*/
