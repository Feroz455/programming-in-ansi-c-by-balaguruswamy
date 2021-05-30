/**
page 269
program 8.12

Write a program to read a line of text from the keyboard and print out the number of occurrences
of a given substring using the function strstr();
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
void PrintDash()
{
    int i;
    printf("\n");
    for(i = 0; i < 75; i++)
        printf("_");
    printf("\n");
}

//main() function begin

int main()
{
    char name[1000],key[20],Tempname[1000];///character array declaration
    int len,klen,i,count = 0;

    /**
    There should be a text massage from user
    */
    printf("Enter your Text\n");
    gets(name);

    /**
    keyword to find into given text/paragraph
    */
    printf("Enter your keyword\n");
    scanf("%s",key);
    klen = strlen(key);


    /**
    most interesting part
    strstr() function will find the matching word until fill become end or null;
    */
   while(strstr(name,key) != NULL)

   {

   count++;///counting Number of occurrence the matching word
   strcpy(Tempname,strstr(name,key)); ///copying name string to "Tempname"

   /**
   Calculate length  of Tempname With keyword
   */
    len = strlen(Tempname);

    /**
    len- klen
    means
    loop will run string length  minus keyword length
    as (e.g Tempname length =  40 with keyword
        and key word length = 5
        then loop will run 40-5 = 35 times;



        strstr()
        function return 1st occurrences of key word .
        so if you want to search next occurrence, then you have to subtract first occurrences
    */
    for(i = 0; i <len-klen; i++)
    {
        name[i] = Tempname[strlen(key)+i];///copping string without first occurrences of keyword
    }
    //puts(name); /// uncomment me ///
    name[i] = '\0'; // comment me // try to run your code with out this line hahahah you will find your ans
    }

    PrintDash();
    PrintDash();

    printf("Total Occurrence of \" %s \" in text : %d times\n",key,count);

    PrintDash();
    PrintDash();
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your Text
Write a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrencesWrite a program to read a line of text from the keyboard and print out the number of occurrences
Enter your keyword
out

___________________________________________________________________________

___________________________________________________________________________
Total Occurrence of " out " in text : 8 times

___________________________________________________________________________

___________________________________________________________________________

Process returned 0 (0x0)   execution time : 10.108 s
Press any key to continue.
*/
