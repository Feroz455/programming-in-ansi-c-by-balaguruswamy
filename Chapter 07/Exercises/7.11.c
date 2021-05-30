/**
page 235
program 7.11
Write a program that will compute the length of a given character
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
       char c[100];
    printf("Enter your string\n");
       scanf("%s",&c);
    printf("Your string is = %s\n",c);
        int i;
       i = 0;
       while(c[i] != '\0')
       {
           i++;
       }
       printf("%d character in your string\n",i);

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/

