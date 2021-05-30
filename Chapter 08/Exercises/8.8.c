/**
page 269
programming exercise 8.8
Write a program that reads a string from the keyboard
and determines whether the string is a
palindrome or not
A string is a palindrome if it can be read from left and right with
the same
meaning for example Madam and anna are palindrome
string ignore capitalization

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char str[40],check[40];
    int len,i,j;

    printf("Enter your string\n");
    scanf("%s",str);

    len = strlen(str);

    ///converting upper case character to lowercase
       for(j = len; j >= 0; j--)
    {
         str[j] = towlower(str[j]);
    }

    ///inserting srt array into check in revers


    for(i = len-1,j = 0; i >= 0; i--)
    {
        check[j++] = str[i];
    }

///checking string is palindrome or not
    if(strcmp(str,check) == 0)
        printf("Palindrome");
    else
    printf("Not palindrome\n\n");


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your string
palindrome
Not palindrome


Process returned 0 (0x0)   execution time : 2.577 s
Press any key to continue.





***********************
Enter your string
Madam
Palindrome
Process returned 0 (0x0)   execution time : 2.236 s
Press any key to continue.
*/
