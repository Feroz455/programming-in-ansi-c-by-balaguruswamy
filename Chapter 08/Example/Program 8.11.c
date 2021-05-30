/**
page 260
program 8.11

write a program that would sort a list of names in alphabetical order

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ITEMS 5
#define MAXCHAE 20
//main() function begin

int main()
{
    char string[ITEMS][MAXCHAE], dummy[MAXCHAE];
    int i = 0, j = 0;

    ///reading the list

    printf("Enter name of %d items\n",ITEMS);
///reading the list
    while(i < ITEMS)
    {
        scanf("%s",string[i++]);
    }

    ///sorting begins
    for(i =1; i < ITEMS; i++)///outer loop beins
    {
        for(j = 1; j <= ITEMS-i; j++)
        {
            if(strcmp(string[j-1],string[j]) > 0)
            {
            strcpy(dummy,string[j-1]);
            strcpy (string[j-1],string[j]);
            strcpy (string[j],dummy);
            }
        }///inner loop ends
    }///outer loop ends
///sorting complete

printf("\nAlphabetical list \n\n");
for(i = 0; i < ITEMS ; i++)
    printf("%d) %s\n",i+1,string[i]);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter name of 5 items
Oishee
Himadry
Payel
Sumon
Shadin

Alphabetical list

1) Himadry
2) Oishee
3) Payel
4) Shadin
5) Sumon



Enter name of 5 items
London Manchester Delhi Paris Moscow

Alphabetical list

1) Delhi
2) London
3) Manchester
4) Moscow
5) Paris

Process returned 0 (0x0)   execution time : 21.528 s
Press any key to continue.
*/
