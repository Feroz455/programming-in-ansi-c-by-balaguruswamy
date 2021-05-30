/**
page 269
programming exercises 8.5

Write a program which will read a string and rewrite it in the alphabetical order.
For example The word STRING should be Written as GNIRTS

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char string[100],c;
    int i,j = 0,len;

    printf("Enter a string\n");
    scanf("%s",string);
    len = strlen(string);


    for(j = len-1; j >= 0; j--)
    {
        printf("%c",string[j]);
    }


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a string
STRING
GNIRTS
Process returned 0 (0x0)   execution time : 5.111 s
Press any key to continue.
*/
