/**
6.20
Given a set of 10 two digit integers containing both positive and negative values write a program
using for loop to compute the sum of all positive values and print the sum and the number of
values added. The program should use scanf to read the values and terminate when the sum
exceeds 999. Do not use goto statement.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
      int i, number, pos_sum =0, neg_sum=0, pos_cont=0, neg_cont=0;

    printf("Enter 10 two digits Numbers: ");
    for(i=0;i<10;i++){
      scanf("%d", &number);
      if(pos_sum<999 || neg_sum<999){
        if(number >= 0){
          pos_sum += number;
          pos_cont++;
        }
        else{
          neg_sum += number;
          neg_cont++;
        }
      }
      else{
        break;
      }
    }

    printf("Total Positive Numbers: %d\n",pos_cont);
    printf("Sum of Positive Numbers: %d\n",pos_sum);

    printf("Total Negative Numbers: %d\n",neg_cont);
    printf("Sum of Negative Numbers: %d\n",neg_sum);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter 10 two digits Numbers: 12
98
78-8
-45
15
-75
52
-78
-12
Total Positive Numbers: 5
Sum of Positive Numbers: 255
Total Negative Numbers: 5
Sum of Negative Numbers: -218
*/
