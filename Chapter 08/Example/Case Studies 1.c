/**
page 262
CASE STUDIES 1
Counting Words in a text

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char line[81],ctr;
    int i, c,end = 0, character = 0, words = 0, lines = 0;

    printf("KEY IN THE TEXT.\n");

    printf("GIVE ONE SPACE AFTER EACH WORD.\n");
    printf("WHEN COMPLETED, PRESS <RETURN>.\n\n\n");

    while( end == 0)
    {
        ///Reading a line of text
        c = 0;
        while((ctr = getchar()) != '\n')
        {
            line[c++] = ctr;

        }
        line[c] = '\0';

        ///counting the word in a line

        if(line[0] == '\0')
        {
            //printf("line[%d]\n",c);
             break;
        }

        else
        {
            words++;
            for(i = 0; line[i] != '\0'; i++)
                if(line[i] == ' ' || line[i] == '\t')
                words++;
        }
        ///counting lines and character
       // printf("hi\n");
        lines = lines + 1;
    }
    printf("\n");
    printf("Number of lines = %d\n",lines);
    printf("Number of words = %d\n",words);
    printf("Number of characters = %d\n",character);


	getch();
	return 0;
}
///main() end

///program end

/**
output
KEY IN THE TEXT.
GIVE ONE SPACE AFTER EACH WORD.
WHEN COMPLETED, PRESS <RETURN>.


Admiration is a very short-lived passion.
Admiration involves a glorious obliquity of vision.
Always we like those who admire us but we do not
like those whom we admire.
Fools admire, but men of sense approve.


Number of lines = 5
Number of words = 36
Number of characters = 0

Process returned 0 (0x0)   execution time : 3.390 s
Press any key to continue.
*/
