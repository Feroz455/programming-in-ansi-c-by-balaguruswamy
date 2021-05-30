/**
page 242
program 8.2
Write a program to read a line of text containing a series of words from
the terminal;
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char line[81],character;

    int c;
    c = 0;
    printf("Enter text, press <RETURN> key\n");

    do{
        character = getchar();
        line[c] = character;
        c++;
    }while(character != '\n');

    c = c -1;
    line[c] = '\n';

    printf("\n%s\n",line);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter text, press <RETURN> key
National Centre for Expert Systems, Hyderabad.

National Centre for Expert Systems, Hyderabad.


Process returned 0 (0x0)   execution time : 6.373 s
Press any key to continue.

*/
