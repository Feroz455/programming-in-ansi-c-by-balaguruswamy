/**
page 358
programing Exercises 10.14
Define a structure called cricket that will describe the following information

Player Name
Team name
Batting average
Using cricket declare an array player with 50 elements and write a program to read the information
about all the 50 players and print a team-Wise list containing names of players with their batting average
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
    char player[20];
    char TeamName[20];
    float averageRun;

};
void PrintNewLine(void);
void PrintDash(void);
void PrintHeaderMassage(void);
void pritnMenu();
void input(struct cricket t[], int len);
void GattingTeamName(struct cricket h[],int len);
int main()
{
    int len  =  10;//total number of player
    struct cricket Team[len];


    PrintNewLine();
    PrintDash();
    PrintHeaderMassage();
    printf("Enter player name,country name, and there Batting average\n ");
    input(Team, len);
    PrintDash(); PrintDash();
    GattingTeamName( Team,len);



	getch();
	return 0;
}
void input(struct cricket t[], int len)
{
    int i;
    for(i = 0; i < len; i++)
            scanf("%s %s %f",t[i].player,t[i].TeamName ,&t[i].averageRun);
}


void GattingTeamName(struct cricket h[],int len)
{
    char TeamName[10][20];
    int i = 0;
    int j = 0;
    int k,check;
    strcpy(TeamName[j],h[i].TeamName);
    while( i < len)
    {
        if(strcmp(TeamName[j] , h[i].TeamName) != 0)
        {
            for( k = 0 ; k < j ; k++)
            {
               if(strcmp(TeamName[k],h[i].TeamName)== 0)
               {
                   check = 1;
                    break;
               }
            }

            if(check != 1)
            {

               strcpy(TeamName[++j],h[i].TeamName);

            }
        }

        i++;
    }

    for(i  = 0; i <= j ; i++)
    {
        printf("%s\n",TeamName[i]);
        for(k = 0; k < len; k++)
        {
            if(strcmp(h[k].TeamName ,TeamName[i] ) == 0)
                printf("%s %.2f\n",h[k].player, h[k].averageRun);
        }
        printf("\n\n");
    }

}





void PrintNewLine(void)
{
    int i;
    for(i = 0; i<20; i++)
        printf("\n");
}
void PrintDash(void)
{
    int i;
    for(i = 0; i< 72; i++)
    {
        printf("_");
    }
    printf("\n");
}
void PrintHeaderMassage(void)
{
    printf("TEAM STRUCT DISPLAY, MANIPULATE, SORT DATA \n");
}

void pritnMenu()
{
    printf("\t1\t: INPUTE DATA\n"
           "\t2\t: DISPLAY DATA \n"
           "\t3\t: SORT BY NAME\n"
           "\t4\t: SORT BY GRADE\n"
           "\t5\t: SORT BY AVERAGE\n"
           "\t6\t: ROOM CHARGES LESS THEN THE  GIVEN  VALUE\n"
           "\t7\t: HOTEL OF A GIVEN GREADE\n"
           "\t8\t: EXIT\n");
    return;
}
///main() end

///program end

/**
output






________________________________________________________________________
TEAM STRUCT DISPLAY, MANIPULATE, SORT DATA
Enter player name,country name, and there Batting average
 Tammim Bangladesh 56
Sochin India 66
Watson Austelia 50
Vhirat India 70
Mahmudulla Bangladesh 45
Tammim Bangladesh 56
Sochin India 66
Watson Austelia 50
Vhirat India 70
Mahmudulla Bangladesh 45
________________________________________________________________________
________________________________________________________________________
Bangladesh
Tammim 56.00
Mahmudulla 45.00
Tammim 56.00
Mahmudulla 45.00


India
Sochin 66.00
Vhirat 70.00
Sochin 66.00
Vhirat 70.00


Austelia
Watson 50.00
Watson 50.00



Process returned 0 (0x0)   execution time : 15.568 s
Press any key to continue.
*/
