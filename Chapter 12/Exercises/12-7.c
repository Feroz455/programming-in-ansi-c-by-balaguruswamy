/**
page 418
program 12.7
12.7 Write a program that requests for a file name and an integer, known as offset value
The program then reads the file starting from the location specified by the offset value
and print the contents on the screen
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    FILE *fp0, *fp1;
    int number;
    long offset,n;
    char name[20],c;


    //open file in write mode
    fp0 = fopen("DATA", "w");

    if(fp0 != NULL) // checking if fp0 open succesfully
    {
        printf("Enter your text\n\n\nEOF to end\n\n\n");
        ///putting data into DATA file
        while((c = getchar()) != EOF)
        {
        putc(c,fp0);

        }
    }
    else
    {
        printf("File Cannot Open\n");
    }


    n = ftell(fp0); // counting total character inputed into file
    fclose(fp0);



    printf("Enter File name and offset value\n\n");
    scanf("%s %dl",name, &offset);
///if offset positive then skip that many line from the file
    if(offset > 0)
    {
        ///open both file source file and target file
        fp0 = fopen("DATA", "r");// source file
        fp1 = fopen(name, "w");//Target file

        if((fp0 != NULL))///checking file open succesfully or not
        {
            //start from beginning  .. you can use rewind(fp0)
            fseek(fp0, offset, 0);

            while((c = getc(fp0)) != EOF)
            {
                putc(c,fp1);
            }

            fclose(fp0);
            fclose(fp1);
            ///printing data from target file
            fp1 = fopen(name, "r");
            while((c = getc(fp1)) != EOF)
            {
                printf("%c",c);
            }
            fclose(fp1);
        }
        else
            printf("ERROR OCCOUR\n");

    }

    ///if offset is negative
    ///program will store last offsets line into target file
     if(offset < 0)
    {

        fp0 = fopen("DATA", "r");
        fp1 = fopen(name, "w");
        ///offset = number of character (-) total character into source file
        offset = n + offset;

        if((fp0 != NULL))
        {
            fseek(fp0, offset, 0);///from end to offset
            ///coping last offsets character into target file
            while((c = getc(fp0)) != EOF)
            {
                putc(c,fp1);
            }

            fclose(fp0);
            fclose(fp1);
        ///printing target file into screen
            fp1 = fopen(name, "r");
            while((c = getc(fp1)) != EOF)
            {
                printf("%c",c);
            }
            fclose(fp1);
        }
        else
            printf("ERROR OCCOUR\n");


    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your text


EOF to end


Two appendices were also added. The first described the extended keywords
defined by Microsoft that are used for creating managed code for the .NET Framework.
The second shows off an area of personal interest: robotics. Robotics has long been a
hobby of mine and I thought that many readers would find my experimental robot to
be of interest. Most of the software that drives it is, of course, written in C++!
Finally, all code examples were retested against the current crop of compilers,
^Z
Two appendices were also added. The first described the extended keywords
defined by Microsoft that are used for creating managed code for the .NET Framework.
The second shows off an area of personal interest: robotics. Robotics has long been a
hobby of mine and I thought that many readers would find my experimental robot to
be of interest. Most of the software that drives it is, of course, written in C++!
Finally, all code examples were retested against the current crop of compilers,
 Enter File name and offset value

DATA1
-50
 retested against the current crop of compilers,

Process returned 0 (0x0)   execution time : 13.681 s
Press any key to continue.
*/
