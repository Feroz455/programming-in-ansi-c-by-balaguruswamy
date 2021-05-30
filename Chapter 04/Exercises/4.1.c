/**
Programming Exercises
G//Given the string”WORDPROCESSING”, write a program to read the string from //the
terminal and display the same in the following formats:

(a) WORD PROCESSING
(b) WORD
PROCESSING
(c) W.P.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char Word1[15],Word2[15];

    printf("Enter your word\n");

    scanf("%4s %s",Word1,Word2);

    printf("(a) %s %s\n",Word1,Word2);

     printf("(b) %s \n    %s\n",Word1,Word2);
     printf("(c) %.1s.%.1s.",Word1,Word2);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your word
WORDPROCESSING
(a) WORD PROCESSING
(b) WORD
    PROCESSING
(c) W.P.
*/
