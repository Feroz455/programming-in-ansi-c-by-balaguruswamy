/**
page 398
program 12.1
Write a program to read data from the keyboard , Write it to a file
called INPUT again read the same data from the INPUT file and display it on
the screen

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    FILE *f1;
    char c;

    printf("Data Input\n\n");
    /*Open the file INPUT*/
    f1 = fopen("INPUT","w");
    /*Get a character from the keyboard*/
    while((c = getchar())!=EOF)
    {
        /*Write a character to INPUT*/
        putc(c,f1);
    }
    /*Close the file INPUT*/
    fclose(f1);
    printf("\nData Output\n\n");
    /*Reopen the file INPUT*/
    f1 = fopen("INPUT","r");
    while((c = getc(f1)) !=  EOF)
    {
        /*Display a character on screen*/
        printf("%c",c);
    }

    /* Close the file*/
    fclose(f1);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Data Input

Hello dear Dont you think C program is rock
^Z

Data Output

Hello dear Dont you think C program is rock

Process returned 0 (0x0)   execution time : 28.057 s
Press any key to continue.

*/
