
/**
page 269
program 8.4
Write a program which will read a text and count all occurrence of a particular word;

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define WORD 1000
#define SIZE 10

//main() function begin

int main()
{
    char text[WORD][SIZE],key[SIZE],t;
    int size[SIZE],x = 0;

    int i = 0, j;
    printf("Enter your text\n");


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

    ///search key insert
    printf("Enter your search key\n");
    scanf("%s",key);

    ///searching word in our array
    for(j = 0; j < i; j++)
    {
        if(strcmp(text[j],key) == 0)
            x++;
    }

    ///checking word is found or not
    if(x)
        printf("\n\n\n%s \t %d TIMES",key,x);
    else
        printf("Word not found!!");

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your text
Enter your text
Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.Projects can be further structured in Code::Blocks by so-called Virtual Targets.
Enter your search key
can



can      16 TIMES
*/
