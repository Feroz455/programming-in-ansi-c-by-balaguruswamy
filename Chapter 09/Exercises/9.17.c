/**
page 323
Programming exercises 9.17
9.17) Design a Function locate() that takes two character array s1 and s2 and one integer value
m as parameter and inserts the string s1 into s1 immediately after the index m
*/

///program begin
#include<stdio.h>
#include<conio.h>
///Function prototyping
void addingString(char String1[],char String2[],int m);
int StringLength(char String[]);
//main() function begin

int main()
{
    char string[] = {"Bangladesh"};
    char string2[] = {"Bidesh"};
    addingString(string,string2,6);///call addingString function
    puts(string);


	getch();
	return 0;
}
///main() end
///Adding string after m position
void addingString(char String1[],char String2[],int m)
{
    int i ;
    int len2 = StringLength(String2);
    for( i = 0; i < len2; i++)
    {
       String1[m+i] = String2[i];

    }
    String1[m+i] = '\0';

}
///calculate string length
int StringLength(char String[])
{
    int i = 0;

    while(String[++i] != '\0');
    return(i);
}

///program end

/**
output
BanglaBidesh

Process returned 0 (0x0)   execution time : 3.828 s
Press any key to continue.
*/
