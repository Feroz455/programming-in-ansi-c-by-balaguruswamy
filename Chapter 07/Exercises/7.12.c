/**
page 235
program 7.12
Write a program that will count the number occurences of a specified character in a given line of text
Test your program;
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
     char c[100], ocur;
     int i,k = 0;
    printf("Enter your string\n");
       scanf("%s",&c);
       getchar();
    printf("Your string is \n %s\n",c);
    printf("Enter key to find its occurrence ");
        ocur=getchar();
       i = 0;
       while(c[i] != '\0')
       {
         if(c[i] == ocur)
           k++;

           i++;
       }
       printf("%c is %d times in your string\n",ocur,k);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your string
asdasdfdsasdffdsasdfasdfgfdsaASDFSASD
Your string is
 asdasdfdsasdffdsasdfasdfgfdsaASDFSASD
Enter key to find its occurrence a
a is 6 times in your string

*/
