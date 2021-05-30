
/**
page 199

program 7.2
Given below is the list of mark obtained by a class of 50 student in an annual examination

43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74
81 49 37 40 49 16 75 87 91 33 24 58 78 65 56 76 67 (Input data)
45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59
Write a program to count the number of student belonging to each of following groups of marks 0-9 10-19 20-29 100
*/

///program begin
#include<stdio.h>
#include<conio.h>

///Symbolic constant
#define MAXVAL 50
#define COUNTER 11

//main() function begin

int main()
{
    float value[MAXVAL];
    int i, high, low;

    int groupe[COUNTER] = {0,0,0,0,0,0,0,0,0,0};

    ///Reading of value

    for(i = 0; i < MAXVAL; i++)
    {
        scanf("%f",&value[i]);
        ///Counting Frequency of groupe
        ++groupe[(int)(value[i]/10)];
    }
    ///Printing of frequency table

    printf("GROUPE     RANGE     FREQUENCY\n\n");
    for(i = 0; i < COUNTER; i++)
    {
        low = i *10;
        if(i == 10)
            high = 100;
        else
            high = low + 9;
        printf("%2d    %3d TO %3d     %d\n",i+1,low,high,groupe[i]);
    }
    printf("\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output
43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74
81 49 37 40 49 16 75 87 91 33 24 58 78 65 56 76 67
45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59
GROUPE     RANGE     FREQUENCY

 1      0 TO   9     2
 2     10 TO  19     4
 3     20 TO  29     4
 4     30 TO  39     5
 5     40 TO  49     8
 6     50 TO  59     8
 7     60 TO  69     7
 8     70 TO  79     6
 9     80 TO  89     4
10     90 TO  99     2
11    100 TO 100     0
*/
