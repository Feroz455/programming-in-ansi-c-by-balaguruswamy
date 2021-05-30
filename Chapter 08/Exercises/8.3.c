/**
page 269
programming exercises 8.3
Write a program to extract a portion of character string and print the extracted string.Assume that m character are extracted
starting with the nth character.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char str[100],str2[100];
    int len, num;

    printf("Enter your text\n");

    gets(str);

    len = strlen(str);
    printf("Your string lent is = %d\n",len);

    printf("How many character you want into your sub string\n");

    scanf("%d",&num);
    //char    *strncpy(char *, const char *, size_t);

    strncpy(str2, str, num);

    putchar('\n');
    puts(str2);


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your text
write a program to compute sum of number
Your string lent is = 40
How many character you want into your sub string
20

write a program to c

Process returned 0 (0x0)   execution time : 27.905 s
Press any key to continue.
*/
