/**
page 322
programing exercises 9.15
Develop your own function for performing following operations on string
a) Copping one string to another
b) Comparing two string
c) Adding a string to the end of another string
*/

///program begin
#include<stdio.h>
#include<conio.h>
void copyString(char String1[],char String2[]);
int ComparingString(char String1[],char String2[]);
void addingString(char String1[],char String2[]);
int StringLength(char String[]);
//main() function begin

int main()
{
    char String1[] = {"Hello "};
    char String2[] = {"Firoz"};
    char str[50];

    printf("String copping \n");
    copyString(str,String1);
    puts(str);

    printf("String Comparing\n");
    if(!ComparingString(String1,String2))
   {
       printf("Ok we are same\n");
   }
   else
   {
       printf("We are not same\n");
   }
   printf("Adding string to end of another string\n");
    addingString(String1,String2);
    puts(String1);
	getch();
	return 0;
}
///main() end
///String copy
void copyString(char String1[],char String2[])
{
    int i;
    while(String2[i] != '\0')
    {
        String1[i] = String2[i];
      i++;
    }
    String1[i] = '\0';
}
///String  end;
///String Comparing
int ComparingString(char String1[],char String2[])
{
    ///if both the string same then this function will return 0,other wise return number
   int i = 0;
   while(1)
   {
       if(String1[i] != String2[i])
       {
          return(String1[i] - String2[i]);
       }
       if((String1[i] && String2[i]) == '\0')
       {
           return(0);
       }
       i++;
   }
}
///String comparing function end here

///Adding String2 and of the string1
void addingString(char String1[],char String2[])
{
    int i ;
    int len1 = StringLength(String1);
    int len2 = StringLength(String2);
    for( i = 0; i < len2; i++)
    {
       String1[len1+i] = String2[i];

    }
    String1[len1+i] = '\0';

}
///this function is bonus
int StringLength(char String[])
{
    int i = 0;

    while(String[++i] != '\0');
    return(i);
}
///program end

/**
output
String copping
Hello
String Comparing
We are not same
Adding string to end of another string
Hello Firoz

Process returned 0 (0x0)   execution time : 2.453 s
Press any key to continue.



*****ITS feeeeeeeeeeeeeeeel good to use my OWN Function
*/
