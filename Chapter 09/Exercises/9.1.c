/**
page 322
Programming Exercises
Write a Function to exchange to interchange the values of two variable
say x and y.Illustrate the use of this function, in a calling function
Asume that x and y are defined as a global variable
*/

///program begin
#include<stdio.h>
#include<conio.h>
///Function prototyping
void exchange(void);//For exchanging data
void printLine(int x, int y);//for printing data

int NUMBER;//Global variable
int VALUE;
//main() function begin

int main()
{
    NUMBER = 100;
    VALUE = 200;
    printLine(NUMBER,VALUE); ///calling print line function with Number = 100; value = 200
    exchange();///Exchanging value of NUMBER AND VALUE
    printLine(NUMBER,VALUE);///calling print line function with Number = 200; value = 100
	getch();
	return 0;
}
///main() end
///Exchange function start from here
void exchange(void)
{
     int interChange ;

     interChange = NUMBER;
          NUMBER = VALUE;
          VALUE  = interChange;

}
//Exchange function end here
///Printline() begin
void printLine(int x, int y)
{
    printf("NUMBER = %d \n VALUE = %d\n",x,y);
}
///printline end

///program end

/**
output
NUMBER = 100
 VALUE = 200
NUMBER = 200
 VALUE = 100

Process returned 0 (0x0)   execution time : 6.406 s
Press any key to continue.
*/
