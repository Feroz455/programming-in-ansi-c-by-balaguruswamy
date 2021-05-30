/**
page 255
program 8.9
s1,s2 and s3 are three string variable,Write a program to read two string
constant into s1 and s2 and compare whether they are equal or not.If they
are not join them together.Then copy the contents of s1 to the variable s3
At the end the program should print the contents of all the three variables
and there lengths
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char s1[20], s2[20],s3[20];

    int x,l1,l2,l3;

    printf("\n\nEnter two string constants\n");
    printf("? ");

    scanf("%s %s", s1, s2);

    ///comparing s1 and s2

    x = strcmp(s1,s2);
    if(x != 0)
    {
        printf("\n\nString are not equle\n");
        strcat(s1,s2);//joining s1 and s2
    }
    else
        printf("\n\nString are equle\n\n");
    //coping s1 to s3;

    strcpy(s3,s1);

    ///finding length of the string

    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);

    ///output

    printf("\ns1 = %s\t length  =%d characters\n",s1,l1);
     printf("\ns2 = %s\t length  =%d characters\n",s2,l2);
      printf("\ns3 = %s\t length  =%d characters\n",s3,l3);
	getch();
	return 0;
}
///main() end

///program end

/**
output


Enter two string constants
? Firoz Mahmud


String are not equle

s1 = FirozMahmud         length  =11 characters

s2 = Mahmud      length  =6 characters

s3 = FirozMahmud         length  =11 characters
*/
