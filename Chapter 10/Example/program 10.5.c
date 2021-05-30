/**
page 337
program 10.5
Rewrite the program of program 10.4 using an array member to represent
the three subjects
*/

///program begin
#include<stdio.h>
#include<conio.h>

///main() function begin

int main()
{
    struct marks
    {
        int sub[3];
        int total;
    };

    struct marks student[3] = { 45 ,67, 81 , 0 , 75 , 53, 69 , 0, 57, 36, 71, 0};

    struct marks total = {0};

    int i, j;

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j<= 2; j++)
        {
            student[i].total += student[i].sub[i];
            total.sub[j] += student[i].sub[j];
        }
        total.total += student[i].total;
    }

    printf("STUDENT                TOTAL\n");
    for(i = 0; i <= 2; i++)
    {
    printf("student[%d]             %d\n",i+1, student[i].total);

    }

    printf("\nSUBJECT                TOTAL\n");
    for(j = 0; j<= 2; j++)
    {
        printf("Subject-%d              %d\n",j+1, total.sub[j]);

    }
    printf("\nGRAND total =          %d\n",total.total);

	getch();
	return 0;
}
///main() end

///program end

/**
output
STUDENT                TOTAL
student[1]             135
student[2]             159
student[3]             213

SUBJECT                TOTAL
Subject-1              177
Subject-2              156
Subject-3              221

GRAND total =          507

Process returned 0 (0x0)   execution time : 1.672 s
Press any key to continue.


*/
