/**
page 334
program 10.4
For the student array discussed above, write a program to calculate the subject wise and student wise
total and store them as a part of the structure
*/

///program begin
#include<stdio.h>
#include<conio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
//main() function begin

int main()
{
    int i;
    struct marks student[3] = {{45,67,81,0}, {75,53,69,0}, {57,36,71,0} };

    struct marks total= {0};

    for(i = 0; i <= 2; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;

        total.sub1 = total.sub1 + student[i].sub1;
        total.sub2 = total.sub2 + student[i].sub2;
        total.sub3 = total.sub3 + student[i].sub3;
        total.total = total.total + student[i].total;

    }
    printf("STUDEN                      TOTAL\n\n");
    for(i = 0; i <= 2; i++)
    {
        printf("Student[%d]              %d\n",i+1, student[i].total);

    }

      printf("%s            %d\n%s            %d\n%s            %d\n","Subject 1   "
             , total.sub1, "Subject 2   "
             , total.sub2,"Subject 3   "
             ,total.sub3 );


      printf("GRAND TOTAL  =          %d\n",total.total);

	getch();
	return 0;
}
///main() end

///program end

/**
output
STUDEN                      TOTAL

Student[1]              193
Student[2]              197
Student[3]              164
Subject 1               177
Subject 2               156
Subject 3               221
GRAND TOTAL  =          554

Process returned 0 (0x0)   execution time : 4.689 s
Press any key to continue.

*/
