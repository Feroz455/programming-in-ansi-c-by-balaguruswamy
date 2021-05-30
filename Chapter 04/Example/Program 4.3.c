/**
Program 4.3
A program that reads a character from keyboard and then prints it in reverse
case is given in Fig. 4.3. That is, if the input is upper case, the output will be
lower case and vice versa.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char alphabet;
    printf("Enter an alphabet");
    putchar('\n'); /* move to next line */

    alphabet = getchar();

    if (islower(alphabet))
    putchar(toupper(alphabet));/* Reverse and display */
    else
    putchar(tolower(alphabet)); /* Reverse and display */

	getch();
	return 0;
}
//main() end

///program end

/**
output
Enter an alphabet
a
A
Enter an alphabet
Q
q
Enter an alphabet
z
Z
*/
