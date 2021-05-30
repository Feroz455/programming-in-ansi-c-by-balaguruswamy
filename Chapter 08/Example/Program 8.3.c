/**
page 243
program 8.3

Write a program to copy one string into another and count the number of character copied

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char string1[80],string2[80];

    int i;

    printf("Enter a String\n");
    printf("?");
//reading string into string1
    scanf("%s",string1);

    ///copping string character into string2 character by character
    for(i =0; string1[i] != '\0'; i++)
    {
        string2[i] = string1[i];
    }
    ///string2 has copied character until null character .Thats why insert null at the end
    string2[i] = '\0';
    puts("\n");
    printf("%s\n",string2);

    printf("Number of characters = %d\n",i);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a String
?Manchester


Manchester
Number of characters = 10

Process returned 0 (0x0)   execution time : 17.314 s
Press any key to continue.
*/
