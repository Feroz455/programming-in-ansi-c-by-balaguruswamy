/**
page 323
Programing Exercises 9.16
Write a program that invoke a function called find() to perform the following task
a) Receives a character array and a single character
b) Return 1 if the Specified character is found in the array ,0 other wise;
*/

///program begin
#include<stdio.h>
#include<conio.h>
int find(char string[], char c);
//main() function begin

int main()
{
    char string[] = {"Bangladesh"};
    char c = 'a';
    ///if its true mean find() function return 1
    ///...otherwise find function return 0 and else part execute
    if(find(string,c))
        printf("Character '%c' found into %s",c,string);
    else
        printf("NOT FOUND!!");

	getch();
	return 0;
}
///main() end

int find(char string[], char c)
{
    int i = 0;
    while(string[i] != '\0')
    {
        if(string[i] == c)
        {
            return(1);
        }
        i++;
    }
    return(0);
}
///program end

/**
output
Character 'a' found into Bangladesh
Process returned 0 (0x0)   execution time : 3.984 s
Press any key to continue.
*/
