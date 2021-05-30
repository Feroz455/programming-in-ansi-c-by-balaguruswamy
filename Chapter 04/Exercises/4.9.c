/**
4.9 Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf
statement and to display the same in the following format using the printf statement.
a) ANIL K. GUPTA
b) A.K. GUPTA
c) GUPTA A.K.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char Str1[10]="ANIL";
    char Str2[10]="KUMAR";
    char Str3[10]="GUPTA";

    printf("%s %.1s. %s\n",Str1,Str2,Str3);
    printf("%.1s. %.1s. %s\n",Str1,Str2,Str3);
    printf("%s %.1s.%.1s.\n",Str3,Str1,Str2);

	getch();
	return 0;
}
///main() end

///program end

/**
output
ANIL K. GUPTA
A. K. GUPTA
GUPTA A.K.

*/
