/**
page 247
program 8.6

write a program using for loop to print the following output
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int c,d;
    char string[] = "Cprograming";
    printf("\n\n");
       printf("----------------\n");
    for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%-12.*s|\n",d,string);
    }
       printf("---------------\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%-12.*s|\n",d,string);
    }
        printf("--------------\n");

         printf("\n\n");
       printf("----------------\n");
    for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%12.*s|\n",d,string);
    }
       printf("---------------\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%12.*s|\n",d,string);
    }
        printf("--------------\n");

          printf("------------------------\n");
    for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%-12.*s %12.*s|\n",d,string,d,string);
    }
       printf("--------------------------\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%-12.*s %12.*s|\n",d,string,d,string);
    }
        printf("-------------------------\n");

              printf("------------------------\n");
    for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%12.*s %-12.*s|\n",d,string,d,string);
    }
       printf("--------------------------\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%12.*s %-12.*s|\n",d,string,d,string);
    }
        printf("-------------------------\n");

        for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%1.*s %-1.*s|\n",d,string,d,string);
    }
       printf(">>-------------------------->\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%1.*s %-1.*s|\n",d,string,d,string);
    }
        printf("-------------------------\n");


        for(c = 0; c < 11; c++ )
    {
        d = c + 1;
        printf("%*.1s %-*.1s|\n",d,string,d,string);
    }
       printf(">>-------------------------->\n");

    for(c = 11; c > 0; c--)
    {
        d = c;
        printf("%*.1s %-*.1s|\n",d,string,d,string);
    }
        printf("-------------------------\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output

----------------
C           |
Cp          |
Cpr         |
Cpro        |
Cprog       |
Cprogr      |
Cprogra     |
Cprogram    |
Cprogrami   |
Cprogramin  |
Cprograming |
---------------
Cprograming |
Cprogramin  |
Cprogrami   |
Cprogram    |
Cprogra     |
Cprogr      |
Cprog       |
Cpro        |
Cpr         |
Cp          |
C           |
--------------


----------------
           C|
          Cp|
         Cpr|
        Cpro|
       Cprog|
      Cprogr|
     Cprogra|
    Cprogram|
   Cprogrami|
  Cprogramin|
 Cprograming|
---------------
 Cprograming|
  Cprogramin|
   Cprogrami|
    Cprogram|
     Cprogra|
      Cprogr|
       Cprog|
        Cpro|
         Cpr|
          Cp|
           C|
--------------
------------------------
C                       C|
Cp                     Cp|
Cpr                   Cpr|
Cpro                 Cpro|
Cprog               Cprog|
Cprogr             Cprogr|
Cprogra           Cprogra|
Cprogram         Cprogram|
Cprogrami       Cprogrami|
Cprogramin     Cprogramin|
Cprograming   Cprograming|
--------------------------
Cprograming   Cprograming|
Cprogramin     Cprogramin|
Cprogrami       Cprogrami|
Cprogram         Cprogram|
Cprogra           Cprogra|
Cprogr             Cprogr|
Cprog               Cprog|
Cpro                 Cpro|
Cpr                   Cpr|
Cp                     Cp|
C                       C|
-------------------------
------------------------
           C C           |
          Cp Cp          |
         Cpr Cpr         |
        Cpro Cpro        |
       Cprog Cprog       |
      Cprogr Cprogr      |
     Cprogra Cprogra     |
    Cprogram Cprogram    |
   Cprogrami Cprogrami   |
  Cprogramin Cprogramin  |
 Cprograming Cprograming |
--------------------------
 Cprograming Cprograming |
  Cprogramin Cprogramin  |
   Cprogrami Cprogrami   |
    Cprogram Cprogram    |
     Cprogra Cprogra     |
      Cprogr Cprogr      |
       Cprog Cprog       |
        Cpro Cpro        |
         Cpr Cpr         |
          Cp Cp          |
           C C           |
-------------------------
C C|
Cp Cp|
Cpr Cpr|
Cpro Cpro|
Cprog Cprog|
Cprogr Cprogr|
Cprogra Cprogra|
Cprogram Cprogram|
Cprogrami Cprogrami|
Cprogramin Cprogramin|
Cprograming Cprograming|
--------------------------
Cprograming Cprograming|
Cprogramin Cprogramin|
Cprogrami Cprogrami|
Cprogram Cprogram|
Cprogra Cprogra|
Cprogr Cprogr|
Cprog Cprog|
Cpro Cpro|
Cpr Cpr|
Cp Cp|
C C|
-------------------------
C C|
 C C |
  C C  |
   C C   |
    C C    |
     C C     |
      C C      |
       C C       |
        C C        |
         C C         |
          C C          |
--------------------------
          C C          |
         C C         |
        C C        |
       C C       |
      C C      |
     C C     |
    C C    |
   C C   |
  C C  |
 C C |
C C|
-------------------------
*/
