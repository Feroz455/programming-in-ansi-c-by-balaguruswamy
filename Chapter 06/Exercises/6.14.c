/**
6.14 Write programs to evaluate the following functions to 0.0001% accuracy.
a) sinx = x – x3/3! + x5/5! – x7/7! + .............
b) cosx= 1 – x2/2! + x4/4! – x6/6! + ………..
c) SUM= 1 + (½)2 + (1/3)3 +(1/4)4 + ………
*/

///program begin
#include <stdio.h>
#include <math.h>

int factorial(int i)
{
    int fac, j;

    fac = 1;
    for(j = 1; j <= i; j++)
    {
        fac *= j;
    }
	return fac;
}


int main(){

  int i, x;
  double sum = 0;
  int factor;

  printf("Enter Maclaurin series Limit: ");
    scanf("%d", &x);

    printf("The sin(x) Value: ");

      for(i=1;i<=x;i+=2){
        factor = pow(x,i);
        sum+= factor/factorial(i);
      }

      printf("%.2f\n",sum);
      sum =1;
    printf("The cos(x) Value: ");

      for(i=2;i<=x;i+=2){
        factor = pow(x,i);
        sum+= factor/factorial(i);
      }

      printf("%.2f\n",sum);

       sum =1;
    printf("The SUM Value: ");

      for(i=2;i<=x;i+=2){

        sum+= pow(x,i);
      }

      printf("%.2f\n",sum);



  return 0;
}

///main() end

///program end

/**
output
Enter Maclaurin series Limit: 21
The sin(x) Value: 386973.00
The cos(x) Value: 73588.00
The SUM Value: 278850744059330990000000000.00

Process returned 0 (0x0)   execution time : 2.037 s
Press any key to continue.
*/

