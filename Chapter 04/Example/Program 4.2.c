/**
Program 4.2
The program of Fig. 4.2 requests the user to enter a character and displays a
message on the screen telling the user whether the character is an alphabet
or digit, or any other special character.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

//main() function begin

int main()
{


        char character;
        printf("Press any key\n");
        character = getchar();

        if (isalpha(character) > 0)/* Test for letter */

        printf("The character is a letter.");
        else
        if (isdigit (character) > 0)/* Test for digit */
        printf("The character is a digit.");
        else
        printf("The character is not alphanumeric.");

	getch();
	return 0;
}
//main() end

///program end

/**
output
Press any key
h
The character is a letter.
Press any key
5
The character is a digit.
Press any key
*
The character is not alphanumeric.
*/
