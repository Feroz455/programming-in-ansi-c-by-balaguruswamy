
/**
Program 6.6
A class of n student take an annual examination in m subjects;
A program to read the marks obtained by each student in various subjects and to compute
and print the total marks obtained by each of them is given in fig 6.7
The program uses two for loops, one for controlling the number of students and the other for controlling
the number of subjects. Since both the number of students and the number of subjects are requested
by the program, the program may be used for a class of any size and any number of subjects.
The outer loop includes three parts:
1. reading of roll-numbers of students, one after another;
2. inner loop, where the marks are read and totalled for each student; and
3. printing of total marks and declaration of grades.
*/

///program begin
#include<stdio.h>
#include<conio.h>
///Symbolic constant
#define FIRST 360
#define SECOND 240
//main() function begin

int main()
{

        int n, m, i, j,
        roll_number, marks, total;
        printf("Enter number of students and subjects\n");
        scanf("%d %d", &n, &m);
        printf("\n");

        for (i = 1; i <= n ; ++i)
        {
            printf("Enter roll_number : ");
        scanf("%d", &roll_number);
        total = 0 ;
        printf("\nEnter marks of %d subjects for ROLL NO %d\n",m,roll_number);
        for (j = 1; j <= m; j++)
        {
        scanf("%d", &marks);
        total = total + marks;
        }
        printf("TOTAL MARKS = %d ", total);
        if (total >= FIRST)
        printf("( First Division )\n\n");
        else if (total >= SECOND)
        printf("( Second Division )\n\n");
        else
        printf("( *** F A I L *** )\n\n");
        }

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter number of students and subjects
3 6
Enter roll_number : 8701
Enter marks of 6 subjects for ROLL NO 8701
81 75 83 45 61 59
TOTAL MARKS = 404 ( First Division )
Enter roll_number : 8702
Enter marks of 6 subjects for ROLL NO 8702
51 49 55 47 65 41
TOTAL MARKS = 308 ( Second Division )
Enter roll_number : 8704
Enter marks of 6 subjects for ROLL NO 8704
40 19 31 47 39 25
TOTAL MARKS = 201 ( *** F A I L *** )
*/
