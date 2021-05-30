/**
Page 222

Program Case study 3

Evaluating a test

*/

///program begin
#include<stdio.h>
#include<conio.h>

#define STUDENT 25
#define ITEMS 25

//main() function begin

int main()
{
    char key[ITEMS+1], response[ITEMS+1];
    int count , i, student, n, correct[ITEMS+1];

    ///Reading of correct answers

    printf("Input key to the items\n");

    for(i = 0; i<ITEMS; i++)
    {
        scanf("%c",&key[i]);
    }
    scanf("%c",&key[i]);
    key[i] = '\0';

    ///Evaluation begins

    for(student = 1; student <= STUDENT; student++)
    {
        ///reading student responses and counting correct ones
        count = 0;
        printf("\n");
        printf("Input response of student -%d\n",student);
        for(i = 0; i<ITEMS; i++)
        {
        scanf("%c",&response[i]);
        }
        scanf("%c",&response[i]);
        response[i] = '\0';

        for(i = 0; i < ITEMS; i++)
            correct[i] = 0;
        for(i = 0; i < ITEMS; i++)
        {
            if(response[i] == key[i])
            {
                count++;
                correct[i] = 1;
            }
        }
        printf("\n");

        printf("Student -%d\n",student);

        printf("Score is %d out of -%d\n",count, ITEMS);

        printf("Response to the items below are wrong\n");
        n = 0;
        for(i = 0; i < ITEMS; i++)
            if(correct[i] == 0)
            {
                printf("%d",i+1);
                n++;
            }
            if(n == 0)
                printf("NIL\n");
            printf("\n");

    }
    ///GO to next student
    ///evaluation and printing end

	getch();
	return 0;
}
///main() end

///program end

/**
output
Input key to the items
abcdabcdabcdabcdabcdabcda
Input responses of student-1
abcdabcdabcdabcdabcdabcda
Student-1
Score is 25 out of 25
Response to the following items are wrong
NIL
Input responses of student-2
abcddcbaabcdabcdddddddddd
Student-2
Score is 14 out of 25
Response to the following items are wrong
5 6 7 8 17 18 19 21 22 23 25
Input responses of student-3
aaaaaaaaaaaaaaaaaaaaaaaaa
Student-3
Score is 7 out of 25
Response to the following items are wrong
2 3 4 6 7 8 10 11 12 14 15 16 18 19 20 22 23 24
*/

