/**
5.4 Given the list of marks ranging from 0 to 100,write a program to compute and
print the number of students:
a) who have obtained more than 80 marks.
b) who have obtained more than 60 marks
c) who have obtained more than 40 marks
d) who have obtained 40 or less marks
e) in the range 81 to 100
f) in the range 61 to 80
g) in the range 41 to 60
h) in the range 0 to 40
The program should use minimum number of if statements.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    int plus,minuse,A,B,C,Fail;
    plus = minuse = A = B= C = Fail = 0;
    int mark, check;
    printf("Enter mark\n");
    scanf("%d",&mark);



    while(mark > 0)
    {
        check = mark/10;
       switch(check)
    {
    case 9:
    case 8:
        printf("Obtain 'A+'\n");
        plus++;
        break;
    case 7:
        printf("Obtain 'A'\n");
        break;
    case 6:
        printf("Obtain 'A-'\n");
        minuse++;
        break;
    case 5:
        printf("Obtain 'B'\n");
        B++;
        break;
    case 4:
        printf("Obtain 'C'\n");
        C++;
        break;
   default:
    printf("FAIL\n");
    Fail++;
    }
    printf("Enter mark\n");
    scanf("%d",&mark);
    }

/**
e) in the range 81 to 100
f) in the range 61 to 80
g) in the range 41 to 60
h) in the range 0 to 40
*/
    printf("In the range 81 to 100 = %d\n",plus);
    printf("In the range 71 to 80 = %d\n",A);
    printf("In the range 61 to 70 = %d\n",minuse);
    printf("In the range 51 to 60 = %d\n",B);
    printf("In the range 41 to 50 = %d\n",C);
    printf("Fail %d\n",Fail);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter mark
45
Obtain 'C'
Enter mark
65
Obtain 'A-'
Enter mark
80
Obtain 'A+'
Enter mark
45
Obtain 'C'
Enter mark
75
Obtain 'A'
Enter mark
15
FAIL
Enter mark
20
FAIL
Enter mark
42
Obtain 'C'
Enter mark
6
FAIL
Enter mark
25
FAIL
Enter mark
78
Obtain 'A'
Enter mark
21
FAIL
Enter mark
-1
In the range 81 to 100 = 1
In the range 71 to 80 = 0
In the range 61 to 70 = 1
In the range 51 to 60 = 0
In the range 41 to 50 = 3
Fail 5
*/
