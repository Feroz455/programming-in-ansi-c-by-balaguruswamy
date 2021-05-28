/**
3.16 The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and
above 100 calls. Write a program to read customer codes and calls made and print the bill
for each customer.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    float code, call;
    int x;

    while(1)
    {
          printf("Enter customer Code :- ");
          scanf("%f",&code);

          printf("Enter number of call:- ");
          scanf("%f",&call);

          printf("Customer code = %.f\nBill = %.2f\n\n", code , call <= 100 ? 250 :(float)(250 + (1.25 * call)));

          printf("Want to check another customer Bill ??\n");

          printf("1 = YES \t \t 2 = NO\n");


          scanf("%d",&x);

          if(x == 1)
            printf("OK Continue\n\n");
          else
          {
               printf("\"HAVE A NICE DAY SIR\"\n\n");
            break;
          }

    }


	return 0;
}
//main() end

///program end

/**
output
Enter customer Code :- 1542
Enter number of call:- 45
Customer code = 1542
Bill = 250.00

Want to check another customer Bill ??
1 = YES                  2 = NO
1
OK Continue

Enter customer Code :- 1452
Enter number of call:- 2145
Customer code = 1452
Bill = 2931.25

Want to check another customer Bill ??
1 = YES                  2 = NO
2
"HAVE A NICE DAY SIR"


Process returned 0 (0x0)   execution time : 17.735 s
Press any key to continue.
*/
