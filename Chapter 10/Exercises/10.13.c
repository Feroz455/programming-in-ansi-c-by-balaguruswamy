/**
page 356
programing Exercises 10.13
Define a structure that can describe an hotel.It should have members that include
the name, address , grade, average room charge and number of rooms
Write function to perform the following operations
* To print out hotels of a given grade in order of charges
* To print out hotel with room charges less then a given value
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

///structure
struct hotel
{
    char name[50];
    char address[100];
    float grade;
    float average;
    int NumberOfRoom;

};
void PrintNewLine(void);
void PrintDash(void);
void PrintHeaderMassage(void);
struct hotel Choice(struct hotel h[],int len);
void  inpue(struct hotel h[], int len);
void DisplayHotelDetails(struct hotel h[],int len);
void sortByName(struct hotel h[],int len);
void sortByGrade(struct hotel h[],int len);
void sortByAverage(struct hotel h[],int len);
void pritnMenu();
void LessThen(struct hotel h[],int len);
void GivenGrade(struct hotel h[],int len);

//main() function begin

int main()
{
    int NumberOfHotel;
    printf("Enter Number of Hotel you want to enter in your data list\n");
    scanf("%d",&NumberOfHotel);
    struct hotel h[NumberOfHotel];
    PrintNewLine();
    PrintDash();PrintDash();
    PrintHeaderMassage();
    Choice(h,NumberOfHotel);

	getch();
	return 0;
}
///main() end
struct hotel Choice(struct hotel h[],int len)
{
    int ck;
    while(1)
    {
        pritnMenu();
        PrintDash();PrintDash();
        printf("Enter your choice\n");
        scanf("%d",&ck);
        PrintDash();PrintDash();
        switch(ck)
        {
        case 1:
            printf("VALID CHUOICE \t1\t: INPUTE DATA\n ");
            inpue(h,len);
            break;
        case 2:
            printf("VALID CHOICE \t2\t: DISPLAY DATA\n");
            DisplayHotelDetails(h,len);
            break;
        case 3:
            printf("VALID CHOICE \t3\t: SORT BY NAME\n");
            sortByName(h,len);
            break;
        case 4:
            printf("VALID CHOICE \t4\t: SORT BY GRADE\n");
            sortByGrade(h,len);
            break;
        case 5:
            printf("VALID CHOICE \t5\t: SORT BY AVERAGE\n");
            sortByAverage(h,len);
            break;
        case 6:
            printf("VALID CHOICE \t6\t: ROOM CHARGES LESS THEN THE  GIVEN  VALUE\n");
            LessThen(h,len);
            break;
        case 7:
            printf("VALID CHOICE \t7\t: HOTEL OF A GIVEN GREADE\n");
            GivenGrade(h,len);
            break;
        case 8:
            exit(0);
            break;
        default:

            printf("*****************ENTER WRONG VALUE*******************\n"
                   "********************Try again************************\n");
            PrintDash();PrintDash();
        }
    }
};

void GivenGrade(struct hotel h[],int len)
{
    int i,grade;
    printf("Enter you value\n");
    scanf("%d",&grade);

    for(i = 0;  i < len; i++)
    {
        if(h[i].grade == grade)

       printf("\"%20s\"  \"%20s\" \"%4.1f\" \"%5.2f\" \"%4d\"\n",h[i].name,h[i].address,h[i].grade, h[i].average,h[i].NumberOfRoom);
        else
            continue;

    }
}

void LessThen(struct hotel h[],int len)
{
    int i,amount;
    printf("Enter you value\n");
    scanf("%d",&amount);

    for(i = 0;  i < len; i++)
    {
        if(h[i].average <= amount)
      printf("\"%20s\"  \"%20s\" \"%4.1f\" \"%5.2f\" \"%4d\"\n",h[i].name,h[i].address,h[i].grade, h[i].average,h[i].NumberOfRoom);
        else
            continue;

    }
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
void  inpue(struct hotel h[], int len)
{
    printf("Enter \t\tHotel name, Address ,Grade, average room charge, and number of room \n");
    int i;
    for(i = 0; i < len; i++)
    {

        scanf("%s %s %f %f %d",h[i].name,   h[i].address,   &h[i].grade,     &h[i].average,   &h[i].NumberOfRoom);
        if(h[i].grade >= 0 && h[i].grade <= 5)
        continue;
        else
        {
            printf("WRONG GRADE ENTRED enter again.....\n");
            scanf("%d",&h[i].grade);
        }
    }
    return;
};
void DisplayHotelDetails(struct hotel h[],int len)
{
    int i;
    for(i = 0;  i < len; i++)
    {
        if(h[0].grade == 0)
        {
            PrintDash();PrintDash();
            printf("File Is empty!!\nENTER SOME DATA\n");
            PrintDash();PrintDash();
            return;
        }
        else
        {
             printf("\"%20s\"  \"%20s\" \"%4.1f\" \"%5.2f\" \"%4d\"\n",h[i].name,h[i].address,h[i].grade, h[i].average,h[i].NumberOfRoom);

        }

    }
    PrintDash();PrintDash();PrintDash();PrintDash();
    printf("\n\n");
}
void sortByName(struct hotel h[],int len)
{
    int i, tempG, tempN,tempAV, j;
    char tempName[50],tempAds[100];
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len ; j++)
        {
            if(strcmp(h[j].name,h[j-1].name) == -1)
            {
                strcpy(tempName,h[j].name);      strcpy(h[j].name, h[j-1].name);                strcpy(h[j-1].name,tempName);
                strcpy(tempAds,h[j].address);    strcpy(h[j].address, h[j-1].address);          strcpy(h[j-1].address,tempAds);
                tempG = h[j].grade;              h[j].grade = h[j-1].grade;                     h[j-1].grade = tempG;
                tempN = h[j].NumberOfRoom;       h[j].NumberOfRoom = h[j-1].NumberOfRoom;       h[j-1].NumberOfRoom = tempN;
                tempAV = h[j].average;           h[j].average = h[j-1].average;                 h[j-1].average = tempAV;
            }
        }
    }

}
void sortByGrade(struct hotel h[],int len)
{
    int i, tempG, tempN,tempAV, j;
    char tempName[50],tempAds[100];
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len ; j++)
        {
            if(h[j].grade < h[j-1].grade)
            {
                strcpy(tempName,h[j].name);      strcpy(h[j].name, h[j-1].name);                strcpy(h[j-1].name,tempName);
                strcpy(tempAds,h[j].address);    strcpy(h[j].address, h[j-1].address);          strcpy(h[j-1].address,tempAds);
                tempG = h[j].grade;              h[j].grade = h[j-1].grade;                     h[j-1].grade = tempG;
                tempN = h[j].NumberOfRoom;       h[j].NumberOfRoom = h[j-1].NumberOfRoom;       h[j-1].NumberOfRoom = tempN;
                tempAV = h[j].average;           h[j].average = h[j-1].average;                 h[j-1].average = tempAV;
            }
        }
    }

}

void sortByAverage(struct hotel h[],int len)
{
    int i, tempG, tempN,tempAV, j;
    char tempName[50],tempAds[100];
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len ; j++)
        {
            if(h[j].average < h[j-1].average)
            {
                strcpy(tempName,h[j].name);      strcpy(h[j].name, h[j-1].name);                strcpy(h[j-1].name,tempName);
                strcpy(tempAds,h[j].address);    strcpy(h[j].address, h[j-1].address);          strcpy(h[j-1].address,tempAds);
                tempG = h[j].grade;              h[j].grade = h[j-1].grade;                     h[j-1].grade = tempG;
                tempN = h[j].NumberOfRoom;       h[j].NumberOfRoom = h[j-1].NumberOfRoom;       h[j-1].NumberOfRoom = tempN;
                tempAV = h[j].average;           h[j].average = h[j-1].average;                 h[j-1].average = tempAV;
            }
        }
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
    printf("HOTEL STRUCT DISPLAY, MANIPULATE, SORT DATA \n");
}
///program end

/**
output
Enter Number of Hotel you want to enter in your data list
5
________________________________________________________________________
________________________________________________________________________
HOTEL STRUCT DISPLAY, MANIPULATE, SORT DATA
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
1
________________________________________________________________________
________________________________________________________________________
VALID CHUOICE   1       : INPUTE DATA
 Enter          Hotel name, Address ,Grade, average room charge, and number of room
Dhaka_hote Dhaka_1231 4.2 1251 5
Khulna_hotel Khulna_CITY 5 1254 12
Rongpur_Hotel RongPur_City 4 1200 30
Syleht_Hotel Sylhet_City 3.5 1000 10
Cox's_bazzer_Hotel Cox'x_Bazzer 5 2000 60
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
2
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    2       : DISPLAY DATA
"          Dhaka_hote"  "          Dhaka_1231" " 4.2" "1251.00" "   5"
"        Khulna_hotel"  "         Khulna_CITY" " 5.0" "1254.00" "  12"
"       Rongpur_Hotel"  "        RongPur_City" " 4.0" "1200.00" "  30"
"        Syleht_Hotel"  "         Sylhet_City" " 3.5" "1000.00" "  10"
"  Cox's_bazzer_Hotel"  "        Cox'x_Bazzer" " 5.0" "2000.00" "  60"
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________


        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
3
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    3       : SORT BY NAME
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
2
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    2       : DISPLAY DATA
"  Cox's_bazzer_Hotel"  "        Cox'x_Bazzer" " 5.0" "2000.00" "  60"
"          Dhaka_hote"  "          Dhaka_1231" " 4.2" "1251.00" "   5"
"        Khulna_hotel"  "         Khulna_CITY" " 5.0" "1254.00" "  12"
"       Rongpur_Hotel"  "        RongPur_City" " 4.0" "1200.00" "  30"
"        Syleht_Hotel"  "         Sylhet_City" " 3.5" "1000.00" "  10"
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________


        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
4
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    4       : SORT BY GRADE
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
2
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    2       : DISPLAY DATA
"        Syleht_Hotel"  "         Sylhet_City" " 3.0" "1000.00" "  10"
"          Dhaka_hote"  "          Dhaka_1231" " 4.0" "1251.00" "   5"
"       Rongpur_Hotel"  "        RongPur_City" " 4.0" "1200.00" "  30"
"  Cox's_bazzer_Hotel"  "        Cox'x_Bazzer" " 5.0" "2000.00" "  60"
"        Khulna_hotel"  "         Khulna_CITY" " 5.0" "1254.00" "  12"
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________


        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
5
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    5       : SORT BY AVERAGE
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
2
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    2       : DISPLAY DATA
"        Syleht_Hotel"  "         Sylhet_City" " 3.0" "1000.00" "  10"
"       Rongpur_Hotel"  "        RongPur_City" " 4.0" "1200.00" "  30"
"          Dhaka_hote"  "          Dhaka_1231" " 4.0" "1251.00" "   5"
"        Khulna_hotel"  "         Khulna_CITY" " 5.0" "1254.00" "  12"
"  Cox's_bazzer_Hotel"  "        Cox'x_Bazzer" " 5.0" "2000.00" "  60"
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________
________________________________________________________________________


        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
6
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
Enter you value
1000
"        Syleht_Hotel"  "         Sylhet_City" " 3.0" "1000.00" "  10"
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
7
________________________________________________________________________
________________________________________________________________________
VALID CHOICE    7       : HOTEL OF A GIVEN GREADE
Enter you value
5
"        Khulna_hotel"  "         Khulna_CITY" " 5.0" "1254.00" "  12"
"  Cox's_bazzer_Hotel"  "        Cox'x_Bazzer" " 5.0" "2000.00" "  60"
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY GRADE
        5       : SORT BY AVERAGE
        6       : ROOM CHARGES LESS THEN THE  GIVEN  VALUE
        7       : HOTEL OF A GIVEN GREADE
        8       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
8
________________________________________________________________________
________________________________________________________________________

Process returned 0 (0x0)   execution time : 269.093 s
Press any key to continue.
*/
