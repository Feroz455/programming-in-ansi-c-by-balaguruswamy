/**
7.2 The daily maximum temperature recorded in 10 cities during the month of January
(for all 31 days) have been tabulated as follows:
City
1 2 3 4 5 6 ???????????10
Day
1
2
3
.
.
.
.
31
Write a program to read the table elements into a two-dimensional array temperature, and
to find the city and day corresponding to
a) the highest temperature
b) the lowest temperature
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define CITY 10
#define DAY 31
//main() function begin

int main()
{
    int i, j, k;
    float tempHigh,tempLow;
    float Temperature[DAY][CITY];
    float high , low;//highDay[],lowDay[];


   printf("Enter temprature\n");
    for(i = 0; i < DAY; i++)
    {
        for(j = 0; j < CITY; j++)
        {
             scanf("%f",&Temperature[i][j]);

             tempHigh = Temperature[i][j];
             tempLow = Temperature[i][j];


             if(i == 0 && j == 0)
             {
                  high = Temperature[i][j];
                 low = Temperature[i][j];
             }
             if(high < tempHigh)
             {
                 k = high;
             high = tempHigh;
             tempHigh = k;
             }


             else
                if(low > tempLow)
                {
                   k = low;
                 low = tempLow;
                 tempLow = k;
                }
        }

    }
    printf("High Temperature = %.2f\n",high);
    printf("Low  Temperature =  %.2f\n",low);

    printf("               City-------------->\n");
    printf("Date");

    for(i = 1 ; i < 11; i++ )
        printf("%4d",i);
    printf("\n------------------------------------------------\n");

        for(i = 0; i < DAY; i++)
        {
            printf("%2d|",i+1);
            for(j = 0; j < CITY; j++)
            {
                printf("%4.f",Temperature[i][j]);
            }

       printf("\n----------------------------------------------\n");

        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter temprature
63      52      49      30      41      56      56      45      47      47      28      24      42      38      27
        39      59      20      35      60      41      34      21      55      26      65      19      58      59
        20      55      42      55      17      57      29      65      53      15      27      58      21      46
        62      40      62      20      16      64      49      19      24      60      49      47      48      57
        38      23      15      29      17      48      27      64      20      37      46      58      28      35
        20      25      45      60      41      21      29      54      35      17      33      55      34      41
        22      21      24      48      60      25      25      33      25      37      25      64      41      34
        27      35      15      17      15      26      18      40      29      41      28      47      37      53
        56      21      58      41      24      65      55      22      26      17      37      51      28      21
        41      45      19      64      36      38      48      51      36      25      33      54      36      34
        16      54      41      41      61      19      27      64      23      29      39      63      43      16
        17      43      60      34      33      34      52      32      27      34      54      53      58      49
        61      37      58      56      52      37      48      15      29      15      18      63      35      23
        29      16      50      27      22      39      23      39      40      48      25      44      47      42
        35      49      61      64      34      44      64      16      65      37      60      23      48      48
        49      20      47      15      32      17      25      28      52      52      25      59      31      65
        58      23      32      30      16      21      28      49      50      49      57      25      55      55
        33      52      18      26      52      17      45      52      35      39      55      42      21      65
        15      44      52      26      29      37      63      44      20      35      50      20      60      48
        40      43      48      22      30      22      50      51      25      63      39      65      28      18
        35      59      38      65      17      33      26      38      55      21      59      53      16      61
        41      37      54      54      51      57      18      28      65      23      62      20      63      64
        33
High Temperature = 65.00
Low  Temperature =  15.00
               City-------------->
Date   1   2   3   4   5   6   7   8   9  10
------------------------------------------------
 1|  63  52  49  30  41  56  56  45  47  47
----------------------------------------------
 2|  28  24  42  38  27  39  59  20  35  60
----------------------------------------------
 3|  41  34  21  55  26  65  19  58  59  20
----------------------------------------------
 4|  55  42  55  17  57  29  65  53  15  27
----------------------------------------------
 5|  58  21  46  62  40  62  20  16  64  49
----------------------------------------------
 6|  19  24  60  49  47  48  57  38  23  15
----------------------------------------------
 7|  29  17  48  27  64  20  37  46  58  28
----------------------------------------------
 8|  35  20  25  45  60  41  21  29  54  35
----------------------------------------------
 9|  17  33  55  34  41  22  21  24  48  60
----------------------------------------------
10|  25  25  33  25  37  25  64  41  34  27
----------------------------------------------
11|  35  15  17  15  26  18  40  29  41  28
----------------------------------------------
12|  47  37  53  56  21  58  41  24  65  55
----------------------------------------------
13|  22  26  17  37  51  28  21  41  45  19
----------------------------------------------
14|  64  36  38  48  51  36  25  33  54  36
----------------------------------------------
15|  34  16  54  41  41  61  19  27  64  23
----------------------------------------------
16|  29  39  63  43  16  17  43  60  34  33
----------------------------------------------
17|  34  52  32  27  34  54  53  58  49  61
----------------------------------------------
18|  37  58  56  52  37  48  15  29  15  18
----------------------------------------------
19|  63  35  23  29  16  50  27  22  39  23
----------------------------------------------
20|  39  40  48  25  44  47  42  35  49  61
----------------------------------------------
21|  64  34  44  64  16  65  37  60  23  48
----------------------------------------------
22|  48  49  20  47  15  32  17  25  28  52
----------------------------------------------
23|  52  25  59  31  65  58  23  32  30  16
----------------------------------------------
24|  21  28  49  50  49  57  25  55  55  33
----------------------------------------------
25|  52  18  26  52  17  45  52  35  39  55
----------------------------------------------
26|  42  21  65  15  44  52  26  29  37  63
----------------------------------------------
27|  44  20  35  50  20  60  48  40  43  48
----------------------------------------------
28|  22  30  22  50  51  25  63  39  65  28
----------------------------------------------
29|  18  35  59  38  65  17  33  26  38  55
----------------------------------------------
30|  21  59  53  16  61  41  37  54  54  51
----------------------------------------------
31|  57  18  28  65  23  62  20  63  64  33
----------------------------------------------
*/
