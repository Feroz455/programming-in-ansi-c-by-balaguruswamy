
/**
Page 269
programming Exercises 8.7
A Maruti car dealer maintains a record of sales of various vehicles in the following from

                Vehicle type        Month of sales   Price
                MARUTI-800          02/01             210000
                MARUTI-DX           07/01             265000
                GYPSY               04/02             315750
                MARUTI-VAN          08/02             240000

Write a program to read this data into a table of string and output the details
of a particular vehicle sold during a specified period.The program should request the user to input the vehicle
type and the period(Starting month,ending month)


*/

///program begin
#include<stdio.h>
#include<conio.h>
#define RECORD 8

//main() function begin

int main()
{
    char record[RECORD][3][40],smdl[40],date[40];///character array declaration

    int i, j, k = 0;

    printf("Enter Record\n\n");
    ///Putting data into table
    for(i = 0; i < RECORD; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%s",record[i][j]);//reading from user
        }
    }

///Showing data to user
    printf("Enter Record\n\n");
    for(i = 0; i < RECORD; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%20s\t",record[i][j]);
        }
        printf("\n");
    }
    ///get Car model form user
    printf("Enter search model\n");
    scanf("%s",smdl);
    ///get date from user to search into table
    printf("Enter date\n");
    scanf("%s",date);

///searching start
    for(i = 0; i < RECORD; i++)
    {
        if((strcmp(record[i][0],smdl) == 0) && (strcmp(record[i][1],date)) == 0)///matching data with table
        {
            for(j = 0; j < 3; j++)
            {
                printf("%20s\t",record[i][j]);
                k++;///for conforming that data is on table or not
             }
             printf("\n");
        }
            else
            continue;
    }
    if(!k)
        printf("%20s wasn't sold in %20s",smdl,date);///
	getch();
	return 0;
}
///main() end

///program end

/**
output

Enter Record

MARUTI-800          02/01             210000
                MARUTI-DX           07/01             265000
                GYPSY               04/02             315750
                MARUTI-VAN          08/02             240000
MARUTI-800          02/01             210000
                MARUTI-DX           07/01             265000
                GYPSY               04/02             315750
                MARUTI-VAN          08/02             240000
Enter Record

          MARUTI-800                   02/01                  210000
           MARUTI-DX                   07/01                  265000
               GYPSY                   04/02                  315750
          MARUTI-VAN                   08/02                  240000
          MARUTI-800                   02/01                  210000
           MARUTI-DX                   07/01                  265000
               GYPSY                   04/02                  315750
          MARUTI-VAN                   08/02                  240000
Enter search model
GYPSY
Enter date
07/01
               GYPSY wasn't sold in                07/01
Process returned 0 (0x0)   execution time : 15.984 s
Press any key to continue.





*******************
Enter Record

MARUTI-800          02/01             210000
                MARUTI-DX           07/01             265000
                GYPSY               04/02             315750
                MARUTI-VAN          08/02             240000
MARUTI-800          02/01             210000
                MARUTI-DX           07/01             265000
                GYPSY               04/02             315750
                MARUTI-VAN          08/02             240000
Enter Record

          MARUTI-800                   02/01                  210000
           MARUTI-DX                   07/01                  265000
               GYPSY                   04/02                  315750
          MARUTI-VAN                   08/02                  240000
          MARUTI-800                   02/01                  210000
           MARUTI-DX                   07/01                  265000
               GYPSY                   04/02                  315750
          MARUTI-VAN                   08/02                  240000
Enter search model
MARUTI-VAN
Enter date
 08/02
          MARUTI-VAN                   08/02                  240000
          MARUTI-VAN                   08/02                  240000

Process returned 0 (0x0)   execution time : 17.414 s
Press any key to continue.
*/
