/**
page 418
program 12.3
12.3 Write a program that compare two file and return 0 if they are equal and 1 if they are not
*/

///program begin
#include<stdio.h>
#include<conio.h>
int compare(FILE *a, FILE *b);
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
    ///comparing two file ...if they are same then return 0 else return 1;
    if(!compare(fp, fp0))
    {
        printf("They are same\n");
    }
    else
        printf("They are not same\n");
	getch();
	return 0;
}
///main() end
int compare(FILE *a, FILE *b)
{
    char c,d;
    ///a and b pointer open DATA1 and DATA2
    a = fopen("DATA1", "r");
    b =fopen("DATA2", "r");
///Comparing two file character by character .
    while( ((c = getc(a)) != EOF) && ((d = getc(b))!= EOF))
    {
        if(c != d)///If one of then is not same then it will return 1
        {
            printf("%c %c\n", c, d);
            fclose(a);
            fclose(b);
            return(1);
        }
    }
    ///if file are same then it will return 0;
      fclose(a);
      fclose(b);
    return(0);
}
///program end

/**
output
Enter into DATA1 file
a b
^Z
Enter into DATA2 file
a b
^Z
They are same

Process returned 0 (0x0)   execution time : 10.952 s
Press any key to continue.
Enter into DATA1 file
1
2
3
4
5
^Z
Enter into DATA2 file
1
4
5
4
7
^Z
2 4
They are not same

Process returned 0 (0x0)   execution time : 13.827 s
Press any key to continue.
*/
