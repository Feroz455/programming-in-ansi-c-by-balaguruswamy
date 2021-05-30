
/**
page 418
program 12.10
12.10 Rewrite the program developed in exercise 12.8 to store the details in a random access file
and print the details of alternate products from the file.Modify the program so that it can output the details of a product
when its codes is specified interactively
*/

///program begin
#include<stdio.h>
#include<conio.h>
///define struct for reading data from file
typedef struct _product
{
    char name[20];
    int quantity;
    int number;
    float price;

}product;
//main() function begin

int main(int argc,char *argv[])
{
    product p[5];
    int i,code;
    FILE *fp;
    fp = fopen("DATA", "r");
    ///reading data into struc array.
    for(i = 0; i < 5; i++)
    {
       fscanf(fp,"%s %d %f %d",p[i].name, &p[i].number, &p[i].price, &p[i].quantity);
    }
    fclose(fp);
   /* for(i = 0; i < 5; i++)
    {
       printf("%s %d %.2f %d\n",p[i].name, p[i].number, p[i].price, p[i].quantity);
    }*/
    printf("Enter your product code\n");
    scanf("%d",&code);
///searching data by code ... if multiple product code is same then multiple product will show
///you can override this  uncomment the break then this will show first match
    for(i = 0; i < 5; i++)
    {
        if(p[i].number == code)
        {
            printf("%s %d %.2f %d\n",p[i].name, p[i].number, p[i].price, p[i].quantity);
            ///break;
        }


    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
AAA 444 45.20 45
BBB 111 14.25 12
CCC 555 78.00 24
DDD 888 25.20 5
FFF 999 5.30 75
Enter your product code
111
BBB 111 14.25 12

Process returned 0 (0x0)   execution time : 3.781 s
Press any key to continue.
*************************************************
Enter your product code
111
BBB 111 14.25 12

Process returned 0 (0x0)   execution time : 3.109 s
Press any key to continue.
*/
