/**
page 268
program 8.2
Write a program to do the following
a) To output the question "Who is the inventor of C"
b) To accept an answer
c) To print out "Good" and then stop, if the answer is correct
d) To output the message "Try again".If the answer is wrong
e) To display the correct answer when thr answer is wrong even at the third attempt and stop
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char question[100], ans[20],Cans[20],c;

    int i,j;

    printf("Enter your question\n");
    i = 0;
    while((c = getchar()) != '\n')
    {

        question[i] = c;
        i++;
    }
    question[i] = '\0';
    putchar('\n');
    puts(question);

    i = 0;

     printf("\nAnswer of the Question\n");
     while((c = getchar()) != '\n')
    {

        ans[i] = c;
        i++;
    }
    ans[i] = '\0';
    putchar('\n');
    puts(ans);

    printf("Enter your answer\n");

     i = 0;
     while((c = getchar()) != '\n')
    {

        Cans[i] = c;
        i++;
    }
    Cans[i] = '\0';
    putchar('\n');
    puts(Cans);
    for(i = 0; i < 3; i++)
    {
        if(strcmp(ans,Cans) != 0)
        {
             printf("Incorrect ans!!\n \"try again \"");
        }
       else
       {
             printf("Correct Ans!!!\n");
             break;
       }

    }



	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your question
who is the inventor of C?

who is the inventor of C?

Answer of the Question
Firoz mahmud

Firoz mahmud
Enter your answer
Firoz mahmud

Firoz mahmud
Correct Ans!!!

Process returned 0 (0x0)   execution time : 24.396 s
Press any key to continue.
*/
