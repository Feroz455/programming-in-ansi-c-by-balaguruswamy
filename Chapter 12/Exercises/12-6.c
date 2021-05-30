/**
page 418
program 12.6

12.6 Write a program that prompts the user for two files. One containing a line o text
known as source file and other an empty file known as target file and then copies the
contents of source file into target file.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    FILE *fp, *fp0;
    char c,key;
    ///opening file
    fp = fopen("SurceFile", "w");
    ///read from keyboard
    while((c = getchar()) != EOF)
    {
        putc(c,fp);
    }
    fclose(fp); //closing file

    printf("Enter you character that you want t ignore into your target file\n\n");
    key = getchar();
    ///opening file in read mode
    fp =fopen("SurceFile", "r");
      ///opening file in Write mode
    fp0 = fopen("TargetFile", "w");
    while((c = getc(fp)) != EOF)
    {
        ///if key character is encounter the skip
        if(c == key)
        continue;
        /// other wise copy int target file
        else
            putc(c,fp0);
    }
    ///close both file
    fclose(fp);
    fclose(fp0);
///printing target file
    fp0 = fopen("TargetFile", "r");
    while((c = getc(fp0)) != EOF)
    {
        printf("%c",c);
    }
    fclose(fp0);
	getch();
	return 0;
}
///main() end

///program end

/**
output
this thing gonna be cool
^Z
Enter you character that you want t ignore into your target file

o
this thing gnna be cl

Process returned 0 (0x0)   execution time : 41.398 s
Press any key to continue.

*/
