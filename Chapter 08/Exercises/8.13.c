/**
page 269
program 8.13
Write a program that will copy m Consecutive character from a string s1 beginning at position n into another string
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void PrintDash()
{
    int i;
    printf("\n");
    for(i = 0; i < 75; i++)
        printf("_");
    printf("\n");
}
//main() function begin

int main()
{
    char text[1000],copyText[1000];///Array for storing string
    int i,j,time;///variable for control string


    printf("Enter your text\n ");
    gets(text);///input from user
    int textLen = strlen(text);//string length
    PrintDash();///call PrintDash() function to print dash
    printf("\nLength of the text = %d\n",textLen);
    PrintDash();

    printf("How many character you want to copy ? \n");
    scanf("%d",&time);///Number of character you want from given text

    printf("position number from beginning \n");
    scanf("%d",&j);///from where you want to start copying text
    if((time+j) > textLen) ///if ()given position + number of text you want to copy) is bigger then string length then program will exit();
    {
        printf("Text under flow \nProgram Exit\n");
        exit(0);
    }
    ///Start copying text into copytext array

    for(i = 0; i < time; i++)
    {
        copyText[i] = text[j+i];
    }
    ///have fun with this line XD
    copyText[i] = '\0';

    PrintDash();
    puts(copyText);
    PrintDash();

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your text
Enter your text
 Write a program that will copy m Consecutive character from a string s1 beginning at position n into another string

___________________________________________________________________________

Length of the text = 115

___________________________________________________________________________
How many character you want to copy ?
50
position number from beginning
50

___________________________________________________________________________
cter from a string s1 beginning at position n into

___________________________________________________________________________

Process returned 0 (0x0)   execution time : 9.912 s
Press any key to continue.
*/
