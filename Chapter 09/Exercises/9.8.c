/**
page 322
program 9.8
Write a function that will scan a character string passed as an argument and convert all
lower case character to their uppercase equivalent
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void UpperCharacter(char string[], int i);
//main() function begin

int main()
{
    char string[200],c;
    int i = 0;
    while((c = getchar()) != '\n')
    {
        string[i++] = c;
    }
   string[i] = '\0';
   UpperCharacter(string,i);
	getch();
	return 0;
}
///main() end
void UpperCharacter(char string[], int i)
{
    int j = 0;
    while(j < i )
    {
        if(islower(string[j]))
        printf("%c",string[j++]-32);
        else
            printf("%c",string[j++]);
    }

}
///program end

/**
output
Bangladesh
BANGLADESH
Process returned 0 (0x0)   execution time : 4.656 s
Press any key to continue.
*/
