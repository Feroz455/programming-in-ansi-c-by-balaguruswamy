/**
5.7 Shown below is a Floyd’s triangle.
1
2 3
4 5 6
7 8 9 10
11 .. .. .. 15
.
.
79 .. .. .. .. .. .. 91
(a) Write a program to print this triangle.
(b) Modify the program to produce the following form of Floyd’s triangle.
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i,j,k = 1;

                            /**1
                                2 3
                                4 5 6
                                7 8 9 10
                                11 .. .. .. 15
                                .
                                .
                                79 .. .. .. .. .. .. 91
                                (a) Write a program to print this triangle.*/
    for(i = 0; i < 14; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d ",k++);
        printf("\n");
    }


    printf("\n\n");

                                /**
                                (b) Modify the program to produce the following form of Floyd’s triangle.
                                1
                                0 1
                                1 0 1
                                0 1 0 1
                                1 0 1 0 1*/
    for(i = 1; i < 14; i++)
    {
        for(j = i; j >= 1; j--)
            printf("%d ",j%2);
        printf("\n");
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54 55
56 57 58 59 60 61 62 63 64 65 66
67 68 69 70 71 72 73 74 75 76 77 78
79 80 81 82 83 84 85 86 87 88 89 90 91


1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
0 1 0 1 0 1 0 1
1 0 1 0 1 0 1 0 1
0 1 0 1 0 1 0 1 0 1
1 0 1 0 1 0 1 0 1 0 1
0 1 0 1 0 1 0 1 0 1 0 1
1 0 1 0 1 0 1 0 1 0 1 0 1
*/
