/**
Page 209
Program 7.6
A Survey to know the popularity of four cars (Ambassador, FIat, Dolphin, and Maruti)
was conducted in four cities (Bombay, Calcutta, Delhi and Madras)
Each person surveyed was asked to give his city and type of car he was using.The results in coded from are tabulated as follows

M   1   C 2     B 1     D 3     M 2     B 4
C   1   D 3     M 4     B 2     D 1     C 3
D   4   D 4     M 1     M 1     B 3     B 3
C   1   C 1     C 2     M 4     M 4     C 2
D   1   C 2     B 3     M 1     B 1     C 2
D   3   M 4     C 1     D 2     M 3     B 4
Write a program to produce a table showing popularity of various cars in four cities
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i, j, car;

    int frequency[5][5]={{0},{0},{0},{0},{0}};
    char city;

    printf("For each person, enter the city code\n");
    printf("Followed by the care code.\n");
    printf("Enter the latter X to indicate end.\n");

    ///TABULATION BEGINS

    for(i = 1; i <= 100; i++)
    {
        scanf("%C",&city);
        if(city == 'X' || city == 'x')
            break;
        scanf("%d",&car);
        switch(city)
        {
        case 'B': frequency[1][car]++;
                break;
        case 'C': frequency[2][car]++;
                break;
        case 'D': frequency[3][car]++;
                break;
        case 'M': frequency[4][car]++;
                break;

        }
    }
    ///TABULATION COMPLETED AND PRINTING BEGINS

    printf("\n\n");

    printf("POPULARITY TABLE\n\n");

    printf("_________________________________________________\n");
    printf("CITY Ambassador Fiat Dolphin Maruti\n");
    printf("_________________________________________________\n");

    for(i = 1; i <= 4; i++)
    {
        switch(i)
        {
        case 1 :
            printf("Bombay     ");
            break;
        case 2 :
            printf("Calcutta   ");
            break;
        case 3 :
            printf("Delhi      ");
            break;
        case 4 :
            printf("Modras     ");
            break;
        }
        for(j = 1; j <= 4; j++)
        {
            printf("%7d",frequency[i][j]);
        }
        printf("\n");
    }
     printf("_________________________________________________\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output
For each person, enter the city code
Followed by the care code.
Enter the latter X to indicate end.
M 1 C 2 B 1 D 3 M 2 B 4
C 1 D 3 M 4 B 2 D 1 C 3
D 4 D 4 M 1 M 1 B 3 B 3
C 1 C 1 C 2 M 4 M 4 C 2
D 1 C 2 B 3 M 1 B 1 C 2
D 3 M 4 C 1 D 2 M 3 B 4 X


POPULARITY TABLE

_________________________________________________
CITY Ambassador Fiat Dolphin Maruti
_________________________________________________
Bombay           2      1      3      2
Calcutta         4      5      1      0
Delhi            2      1      3      2
Modras           4      1      1      4
_________________________________________________
*/
