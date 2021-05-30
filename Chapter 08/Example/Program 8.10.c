/**
page 8.10
Program 8.10

The program in fig 8.11 shows how to write a C program that reads a string
and print if it is palindrome or not
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char chk = 't', str[30];

    int len, left, right;

    printf("\nEnter a string\n");

    scanf("%s",str);

    len = strlen(str);

    left = 0;

    right = len -1;

    while(left < right && chk == 't')
    {
        if(str[left] == str[right]);
        else
            chk = 'f';
        left++;
        right--;
    }
    if(chk == 't')
        printf("\nThe string %s is a palindrome\n",str);
    else
        printf("\nThe string  %s is not a palindrome\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output

Enter a string
nitin

The string nitin is a palindrome

*/
