/**
Program 4.1
The program in Fig. 4.1 shows the use of getchar() function in an interactive environment.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char answer;
    printf("Would you like to know my name?\n");

    printf("Type Y for YES and N for NO: ");

    answer = getchar(); /* .... Reading a character...*/

    if(answer == 'Y' || answer == 'y')
    printf("\n\nMy name is BUSY BEE\n");

    else
    printf("\n\nYou are good for nothing\n");

	getch();
	return 0;
}
//main() end

///program end

/**
output
Would you like to know my name?
Type Y for YES and N for NO: y


My name is BUSY BEE

Process returned 0 (0x0)   execution time : 7.829 s
Press any key to continue.
*/
