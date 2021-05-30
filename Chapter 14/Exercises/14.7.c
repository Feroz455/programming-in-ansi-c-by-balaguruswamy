/**
page 464
program 14.7
Define symbolic constants for { and } and printing a blank line.Write a small program using these constant
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define BEGAIN {
#define END }
//main() function begin

int main(int argc,char *argv[])
BEGAIN
    printf("Hello WORLD");
	getch();
	return 0;
END
///main() end

///program end

/**
output
Hello WORLD
Process returned 0 (0x0)   execution time : 1.922 s
Press any key to continue.
*/
