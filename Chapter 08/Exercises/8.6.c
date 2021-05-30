
/**
page 269
programming Exercises 8.6
Write a program to replace a particular word by another word in a given string.
For Example the word "PASCAL" should be replace by 'C' in the text "It is good to program in PASCAL Language"

*/
//program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define WORD 1000
#define SIZE 10

//main() function begin

int main()
{
    char text[WORD][SIZE],key[SIZE],t,replace[SIZE];
    int size[SIZE],x = 0;

    int i = 0, j;
    printf("Enter your text\n");

///Taking input into text array
    do
    {
        size[i] = 0;
        scanf("%s",text[i]);
        for(j = 0; j < i; j++)
        {
            if(strcmp(text[i], text[j]) == 0)
                size[j]++;
        }
            i++;
    }
    while((t=getchar()) != '\n');///to break loop use t..

    printf("Which Word You want to replace\n");
    scanf("%s",replace);


    printf("Enter your word\n");
    scanf("%s",key);
///searching word in our array
    for(j = 0; j < i; j++)
    {
        if(strcmp(text[j],replace) == 0)
        {
            strcpy(text[j],key);///interchanging word into array
            break;///Without break this program replace all word By key
        }
    }
///printing new array
    for(j = 0; j < i; j++)
    {
        printf("%s ",text[j]);
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your text
It is good to program in PASCAL Language
Which Word You want to replace
PASCAL
Enter your word
C
It is good to program in C Language
Process returned 0 (0x0)   execution time : 10.612 s
Press any key to continue.
*/
