/**
page 240
Program 8.1
Write a program to read a series of words from a terminal using scanf
function


*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char word1[40],word2[40],word3[40],word4[40];
    printf("Enter a text : \n");

    scanf("%s %s", word1,word2);
    scanf("%s",word3);
    scanf("%s",word4);
    printf("word1 = %s\nword2 = %s\n",word1, word2);
    printf("word3 = %s\nword4 = %s\n",word3, word4);


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a text :
N
word1 = Oxford-Road,    word2 = London-M17ED
word3 = United  word4 = Kingdom
*/
