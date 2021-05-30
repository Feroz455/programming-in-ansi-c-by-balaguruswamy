/**
page 269
program 8.11
Write a program to read two string and compare them using the function strncmp()
and print a message that the first string is equal less or greater then the second one;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char str[] = "bangladesg";
    char  str2[] = "Bangladesh";

    if(strncmp(str,str2,5) == 0)
   printf("%s  Equal!! %s\n",str ,str2);
    else if(strncmp(str,str2,5) > 0)
        printf("Str2 is greater then str\n");
    else if(strncmp(str,str2,5) < 0)
        printf("Str2 is Less then str\n");


        strcpy(str,"Bangladesg");
        strcpy(str2,"Bangladesh");


    if(strncmp(str,str2,5) == 0)
     printf("%s  Equal!! %s\n",str ,str2);
    else if(strncmp(str,str2,5) > 0)
        printf("Str2 is greater then str\n");
    else if(strncmp(str,str2,5) < 0)
        printf("Str2 is Less then str\n");

        ///
        strcpy(str,"Bangladesg");
        strcpy(str2,"bangladesh");


    if(strncmp(str,str2,5) == 0)
        printf("%s  Equal!! %s\n",str ,str2);
    else if(strncmp(str,str2,5) > 0)
        printf("Str2 is greater then str\n");
    else if(strncmp(str,str2,5) < 0)
        printf("Str2 is Less then str\n");




	getch();
	return 0;
}
///main() end

///program end

/**
output
Str2 is greater then str
Bangladesg  Equal!! Bangladesh
Str2 is Less then str


*/
