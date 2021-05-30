/**
Program 5.2
The program in Fig. 5.4 counts the number of boys whose weight is less than
50 kg and height is greater than 170 cm.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int count, i;
        float weight, height;
        count = 0;
        printf("Enter weight and height for 10 boys\n");
        for (i =1; i <= 10; i++)
        {
        scanf("%f %f", &weight, &height);
        if (weight < 50 && height > 170)
        count = count + 1;
        }
        printf("Number of boys with weight < 50 kg\n");
        printf("and height > 170 cm = %d\n", count);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter weight and height for 10 boys
45 176.5
55 174.2
47 168.0
49 170.7
54 169.0
53 170.5
49 167.0
48 175.0
47 167
51 170
Number of boys with weight < 50 kg
and height > 170 cm = 3
*/
