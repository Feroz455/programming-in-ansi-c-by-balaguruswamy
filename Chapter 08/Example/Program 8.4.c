/**
page 244
program 8.4
The program in fig 8.4 shows how to write a program to find the number of vowels and consonants in a text string.
Elucidate the program and flowchart for the program
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char str[30];
    int vow = 0, cons = 0, i = 0;

    printf("Enter a string: ");
    gets(str);
    printf("%s\n",str);

    while(str[i] != '\0')
    {

        ///checking condition for count vowel into the string
        if(str[i] == 'A' || str[i] == 'a'|| str[i] == 'E' || str[i] == 'e' ||
           str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o'|| str[i] == 'U' || str[i] == 'u')
            vow++;
        else
            cons++;
            i++;
    }
    printf("Number of Vowel into the string = %d\n",vow);
    printf("Number of consonants into the string = %d\n",cons);
    printf("Total character into the sting = %d\n",i);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a string: Bangladesh
Bangladesh
Number of Vowel into the string = 3
Number of consonants into the string = 7
Total character into the sting = 10
*/
