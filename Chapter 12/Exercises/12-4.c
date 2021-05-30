
/**
page 418
program 12.
12.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    char c;
    FILE *fp, *fp0;
    ///open file to read data from user
    printf("Enter into DATA1 file \n");
    fp = fopen("DATA1", "w");
    while((c = getchar()) != EOF)
    {
        putc(c,fp);
    }
    fclose(fp);///close file
     ///open file to read data from user
    printf("Enter into DATA2 file \n");
    fp0 = fopen("DATA2", "w");
    while((c = getchar()) != EOF)
    {
        putc(c,fp0);
    }
    fclose(fp0);///close file
    ///Appending data into DATA1 from DATA2
   fp = fopen("DATA1", "a+");
   fp0 = fopen("DATA2", "r");

   while( (c = getc(fp0)) != EOF)
   {
       putc(c,fp);
   }
///After appending DATA CLOSING file pointer
   fclose(fp);
   fclose(fp0);

   fp = fopen("DATA1", "r");
///printing new data
   while((c = getc(fp)) != EOF)
   {
       printf("%c",c);
   }
   fclose(fp);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter into DATA1 file
hello bangladesh
how Are you
^Z
Enter into DATA2 file
I am from india
^Z
hello bangladesh
how Are you
I am from india

Process returned 0 (0x0)   execution time : 27.439 s
Press any key to continue.
*/
