/**
Develop a program that will read and store the details of a list of student in the format
                        Roll No                     Name                Marks Obtained
                        ......                      ....                ..............
                        ......                      ....                ..............
And produce the following output list
a) Alphabetical List of name, roll numbers and mark obtained
b) List sorted on roll number
c) List on marks(Rand-Wise_lis)

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define ROW 5
#define COLUMN 3
#define CHARACTER 40

///For printing Dash
void PrintDash()
{
    int i;
    printf("\n");
    for(i = 0; i < 75; i++)
        printf("_");
    printf("\n");
}
///Printing Roll No                     Name                Marks Obtained
void  format()
{
    printf("\nRoll No\t\t\t\tName\t\t\t\tMarks Obtained\n");
}
//main() function begin

int main()
{
    char Student[ROW][COLUMN][CHARACTER],temp[COLUMN][CHARACTER];///3D array for storing  student data and temp used for sorting data
    int i, j , k,number, number2;

            for(i = 0; i < ROW; i++)
            {
                for(j = 0; j < COLUMN; j++)
                {
                    scanf("%s",Student[i][j]);
                }
            }

            PrintDash();
            printf("\nSort By roll\n");
            PrintDash();
    ///sorting data by roll number

                for(i = 0; i < ROW; i++)
                {
                    for(j = 1; j < ROW; j++)
                    {
                        number = atoi(Student[j][0]);
                        number2 =atoi(Student[j-1][0]) ;
                            if(number < number2)
                        {
                            ///interchanging data address in array
                            strcpy(temp[0],Student[j][0]);strcpy(temp[1],Student[j][1]);strcpy(temp[2],Student[j][2]);
                            strcpy(Student[j][0],Student[j-1][0]);strcpy(Student[j][1],Student[j-1][1]);strcpy(Student[j][2],Student[j-1][2]);
                            strcpy(Student[j-1][0],temp[0]);  strcpy(Student[j-1][1],temp[1]);  strcpy(Student[j-1][2],temp[2]);
                        }

                    }

                }
                ///printing Data
        format();
                for(i = 0; i < ROW; i++)
                {
                    for(j = 0; j < COLUMN; j++)
                    {
                        printf("%s\t\t\t\t",Student[i][j]);
                    }
                    printf("\n");
                }

                printf("\n");printf("\n");

            PrintDash();
            printf("\nSort By Name\n");
            PrintDash();
/****************************************/
            for(i = 0; i < ROW; i++)
            {
                for(j = 1; j < ROW; j++)
                {
                    if(strcmp(Student[j][1],Student[j-1][1]) < 0 )
                    {

                        strcpy(temp[0],Student[j][0]);strcpy(temp[1],Student[j][1]);strcpy(temp[2],Student[j][2]);
                        strcpy(Student[j][0],Student[j-1][0]);strcpy(Student[j][1],Student[j-1][1]);strcpy(Student[j][2],Student[j-1][2]);
                        strcpy(Student[j-1][0],temp[0]);  strcpy(Student[j-1][1],temp[1]);  strcpy(Student[j-1][2],temp[2]);
                    }
                }
            }
            format();
            for(i = 0; i < ROW; i++)
            {
                for(j = 0; j < COLUMN; j++)
                {
                    printf("%s\t\t\t\t",Student[i][j]);
                }
                printf("\n");
            }
            printf("\n");printf("\n");
                PrintDash();
                printf("\nSort By Mark\n");
                PrintDash();
/*************************************************************/
        for(i = 0; i < ROW; i++)
        {
            for(j = 1; j < ROW; j++)
            {
                        number = atoi(Student[j][2]);
                        number2 =atoi(Student[j-1][2]) ;

                if(number > number2)
                {
                    strcpy(temp[0],Student[j][0]);strcpy(temp[1],Student[j][1]);strcpy(temp[2],Student[j][2]);
                    strcpy(Student[j][0],Student[j-1][0]);strcpy(Student[j][1],Student[j-1][1]);strcpy(Student[j][2],Student[j-1][2]);
                    strcpy(Student[j-1][0],temp[0]);  strcpy(Student[j-1][1],temp[1]);  strcpy(Student[j-1][2],temp[2]);
                }
            }

        }
        format();
        for(i = 0; i < ROW; i++)
        {
            for(j = 0; j < COLUMN; j++)
            {
                printf("%s\t\t\t\t",Student[i][j]);
            }
            printf("\n");
        }

        printf("\n");printf("\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output
12 TanShad 369
11 Shadin 254
20 Sumon 222
13 payel 185
22 Firoz 370

___________________________________________________________________________

Sort By roll

___________________________________________________________________________

Roll No                         Name                            Marks Obtained
11                              Shadin                          254
12                              TanShad                         369
13                              payel                           185
20                              Sumon                           222
22                              Firoz                           370



___________________________________________________________________________

Sort By Name

___________________________________________________________________________

Roll No                         Name                            Marks Obtained
22                              Firoz                           370
11                              Shadin                          254
20                              Sumon                           222
12                              TanShad                         369
13                              payel                           185



___________________________________________________________________________

Sort By Mark

___________________________________________________________________________

Roll No                         Name                            Marks Obtained
22                              Firoz                           370
12                              TanShad                         369
11                              Shadin                          254
20                              Sumon                           222
13                              payel                           185
*/
