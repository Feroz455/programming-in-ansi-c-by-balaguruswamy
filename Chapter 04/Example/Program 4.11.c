/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char x = 'A';
    char name[20] = "ANIL KUMAR GUPTA";
    printf("OUTPUT OF CHARACTERS\n\n");
    printf("%c\n%3c\n%5c\n", x,x,x);
    printf("%3c\n%c\n", x,x);
    printf("\n");
    printf("OUTPUT OF STRINGS\n\n");
    printf("%s\n", name);
    printf("%20s\n", name);
    printf("%20.10s\n", name);
    printf("%.5s\n", name);
    printf("%-20.10s\n", name);
    printf("%5s\n", name);

	getch();
	return 0;
}
//main() end

///program end

/**
output
OUTPUT OF CHARACTERS

A
  A
    A
  A
A

OUTPUT OF STRINGS

ANIL KUMAR GUPTA
    ANIL KUMAR GUPTA
          ANIL KUMAR
ANIL
ANIL KUMAR
ANIL KUMAR GUPTA
*/
