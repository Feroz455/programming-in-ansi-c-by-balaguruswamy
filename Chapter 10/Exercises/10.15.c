/**
page 356
programing Exercises 10.15
Design a structure student_record to contain name, date of birth and total marks obtain. Use the date structure design in
exercises 10.4 to represent the date of birth ;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Date.h"

struct student_record
{
    char name[20];
    struct date d;
    long totalMark;
};
void inputStudentInfo(struct student_record s[],int len);
void printStudentInfo(struct student_record s[],int len );
//main() function begin

int main()
{
    int len;
    printf("Number of student record want to store \n");
    scanf("%d",&len);
    getchar();
    struct student_record s[len];


    inputStudentInfo(s,len);
    printStudentInfo(s,len);

	getch();
	return 0;
}
///main() end
void inputStudentInfo(struct student_record s[],int len)
{
    int i , j;
    printf("Enter student name birthday and total number \n");
    for(i = 0; i < len; i++)
    {
        printf("Name -> \t");
        scanf("%s",s[i].name);
        getchar();
        printf("Birthday ->\t");
        s[i].d = input(s[i].d);
        printf("Total Mark -> \n");
        scanf("%ld",&s[i].totalMark);
    }
    return;
}
void printStudentInfo(struct student_record s[],int len )
{
   int i, j;
   for(i = 0; i < len; i++)
   {
       printf("%s",s[i].name);
       print(s[i].d);
       printf("%ld\n",s[i].totalMark);
   }
   printf("\n");
}
///program end

/**
output
Number of student record want to store
2
Enter student name birthday and total number
Name ->         Firoz_Mahmud
Birthday ->     Enter day       04
Enter month     12
Enter year       1998
Total Mark ->
788
Name ->         Sahadin_Mahmud
Birthday ->     Enter day       11
Enter month     11
Enter year       1996
Total Mark ->
650
Firoz_MahmudDecember 4,1998     788
Sahadin_MahmudNovember 11,1996  650


Process returned 0 (0x0)   execution time : 43.388 s
Press any key to continue.
*/
