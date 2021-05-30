/**
page 394
programming Exercises 11.5
11.5 Using pointer , write a function that receives a character string and a character as argument
and deletes all occurrences of this character in the string.The function should return the corrected
string with no holes;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
char *FindAndReplace(char *s, char c);
//main() function begin

int main()
{
    char *string = "Bangladesh";
     char c = 'a';
     puts(string);


    char *cr;
    int len = strlen(string);
    cr = FindAndReplace(string, c);
    puts(cr);

	getch();
	return 0;
}
///main() end
char *FindAndReplace(char *s, char c)
{
   int len , i = 0,j = 0;
  static char word[10];
   len = strlen(s);
    while(i < len)
   {
        if(s[i] == c);
        else
        {
            word[j] = *(s+i);
            j++;
        }
        i++;
   }
   word[j] = '\0';
   return(word);
}
///program end

/**
output
Bangladesh
Bngldesh

Process returned 0 (0x0)   execution time : 1.484 s
Press any key to continue.
*/
