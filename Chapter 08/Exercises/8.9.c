
/**
page 269
programming exercises 8.9
Write a program that reads the cost of an item in the from RRRR.PP(where RRRR denotes Rupees and
pp denotes paisa ) and convert the value to a string of words that expresses the numeric value in words.For example
,if we input 125.75
the output should be "ONE HUNDRED TWENTY FIVE AND PAISA SENENTY FIVE"


*/

///program begin
#include<stdio.h>
#include<conio.h>

void PrintNewLine()
{
    for(int i = 0; i < 40; i++)
        printf("\n");
}
void PrintDash()
{

    for(int i = 0; i < 50; i++)
        printf("_");
        printf("\n");
}

//main() function begin

int main()
{
    PrintNewLine();
    PrintDash();


        ///array of numeric value in word
    char singles[][10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE",
                      "SIX","SEVEN","EIGHT","NINE","TEN"
                     };

    char doubles[][10] = {"/","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIVETEEN",
                      "SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"
                     };

    char tenfactors[][10]  = {"/","/","TWENTY","THIRTY","FORTY","FIFTY",
                          "SIXTY","SEVENTY","EIGHTY","NINETY"
                         };



    double price;
    int taka, poisa,result,temp;
    printf("Enter your price(RRRR.PP): \n");
    scanf("%lf",&price);


    PrintDash();
    PrintDash();

    price *= 100;

    taka = (int)(price / 100);

    poisa =((int)price % 100);

    printf("Total will be %d.%d \n",taka,poisa);
    PrintDash();
    PrintDash();



       if(taka >= 100000)
    {
        result = taka / 100000;

        taka %= 100000;


        if(taka == 0)
        printf("\n%s MILION TAKA",singles[result]);
/***************************************************************/
        if(result >= 100)
            {
            temp = result/100;
             printf("%s HUNDRED ",singles[temp]);
             result %= 10;
            }
        else
            if(result > 20)
            {
            result /= 10;
            printf("%s ",tenfactors[result]);
            }
       else
            if(result > 10)
            {
                result %= 10;
                result = -1;
            }
        result %= 10;
/**********************************************************/
        if(taka > 0)
        printf("%s MILION AND ",singles[result]);
    }



    if(taka >= 1000)
    {
        result = taka / 1000;
        taka %= 1000;


        if(taka == 0)
        printf("\n%s THOUSAND TAKA",singles[result]);
/***************************************************************/
        if(result >= 100)
            {
            temp = result/100;
             printf("%s HUNDRED ",singles[temp]);
             result %= 10;
            }
        else
            if(result > 20)
            {
            result /= 10;
            printf("%s ",tenfactors[result]);
            }
       else
            if(result > 10)
            {
                result %= 10;
                printf("%s ",doubles[result]);
                result = -1;
            }
        result %= 10;
/**********************************************************/
        if(taka > 0)
        printf("%s THOUSAND AND ",singles[result]);
    }
    if(taka >= 100)
    {
        result = taka / 100;
        taka %= 100;
        if(taka == 0)
        printf("%s HUNDRED",singles[result]);
        if(taka > 0)
        printf("%s HUNDRED ",singles[result]);
    }
    if(taka > 20)
    {
        result = taka / 10;
        taka %= 10;
        if(taka == 0)
        printf("%s ",tenfactors[result]);
        if(taka > 0)
        printf("%s  ",tenfactors[result]);
    }

    if(taka > 10)
    {
        taka %= 10;
        printf("%s ",doubles[taka] );
        taka = -1;
    }
    if(taka >= 0)
    {
        printf("%s ",singles[taka]);
    }

    /******************************************************************/

    printf("AND PAISA ");

    if(poisa >= 100)
    {
        result = poisa / 100;
        poisa %= 100;
        if(poisa == 0)
        printf("%s HUNDRED",singles[result]);
        if(poisa > 0)
        printf("%s HUNDRED",singles[result]);
    }
    if(poisa > 20)
    {
        result = poisa / 10;
        poisa %= 10;
        if(poisa == 0)
        printf("%s ",tenfactors[result]);
        if(poisa > 0)
        printf("%s ",tenfactors[result]);
    }

    if(poisa > 10)
    {
        poisa %= 10;
        printf("%s \n",doubles[poisa] );
        poisa = -1;
    }
    if(poisa >= 0)
    {
        printf("%s \n",singles[poisa]);
    }
    PrintDash();
    PrintDash();
    getch();
	return 0;
}
///main() end

///program end

/**
output
__________________________________________________
Enter your price(RRRR.PP):
45682.75
__________________________________________________
__________________________________________________
Total will be 45682.75
__________________________________________________
__________________________________________________
Result 45
FORTY FOUR THOUSAND AND SIX HUNDRED EIGHTY  TWO AND PAISA SEVENTY FIVE
__________________________________________________
__________________________________________________

Process returned 0 (0x0)   execution time : 9.218 s
Press any key to continue.




__________________________________________________
Enter your price(RRRR.PP):
147856
__________________________________________________
__________________________________________________
Total will be 147856.0
__________________________________________________
__________________________________________________
ONE MILION AND Result 47
FORTY FOUR THOUSAND AND EIGHT HUNDRED FIFTY  SIX AND PAISA ZERO
__________________________________________________
__________________________________________________

*/
/*


///its was unsuccesfull
    char string[100],string2[100],c;
    int i = 0,j = 0,len,takaDigit,poisaDigit;

      while((c = getchar()) != '.')
      {
          string[j++] = c;
      }
      string[j] = '\0';
        takaDigit = j;



        while((c = getchar()) != '\n')
      {
          string2[i++] = c;
      }
      string2[i] = '\0';
      poisaDigit = i-1;



      for( j = poisaDigit; j >= 0; j-- )
      {
          if(j == poisaDigit)
          {

          akok(string2[j]);
          printf("j = %d",j);
          }
          else
          if(j == (poisaDigit-1))
          {
             Dosok(string2[j]);
          printf("j = %d",j);
          }


      }


	getch();
	return 0;
}
///main() end
void akok(char c)
{
    switch(c)
    {
    case '0':
        printf(" ZERO ");
        break;

    case '1':
        printf(" ONE ");
        break;
    case '2':
        printf(" TWO ");
        break;
    case '3':
        printf(" THREE ");
        break;
    case '4':
        printf(" FOUR ");
        break;
    case '5':
        printf(" FIVE ");
        break;
    case '6':
        printf(" SIX ");
        break;
    case '7':
        printf(" SEVEN ");
        break;
    case '8':
        printf(" EIGHT ");
        break;
    case '9':
        printf(" NINE ");
        break;
    default:
        printf("Khela dekte ascho ?\n");
        break;

    }
}
void Dosok(char c)
{
    switch(c)
    {


    case '2':
        printf(" TWENTY ");
        break;
    case '3':
        printf(" THIRTY ");
        break;
    case '4':
        printf(" FOURTY ");
        break;
    case '5':
        printf(" FIFTY ");
        break;
    case '6':
        printf(" SIXTY ");
        break;
    case '7':
        printf(" SEVENY ");
        break;
    case '8':
        printf(" EIGHTY ");
        break;
    case '9':
        printf(" NINTY ");
        break;
    default:
        printf("Khela dekte ascho  abar?\n");
        break;

    }
}

void Hazar(char c)
{
    switch(c)
    {

    case '2':
        printf(" TWENTY ");
        break;
    case '3':
        printf(" THIRTY ");
        break;
    case '4':
        printf(" FOURTY ");
        break;
    case '5':
        printf(" FIFTY ");
        break;
    case '6':
        printf(" SIXTY ");
        break;
    case '7':
        printf(" SEVENY ");
        break;
    case '8':
        printf(" EIGHTY ");
        break;
    case '9':
        printf(" NINTY ");
        break;
    default:
        printf("Khela dekte ascho  abar?\n");
        break;

    }
}

///program end


output

*/
