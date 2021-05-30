/**
page 341
program  10.6
Write a simple program to illustrate the method of sending an entire structure
as a parameter to a function
*/

///program begin
#include<stdio.h>
#include<conio.h>


struct stores
{
    char name[20];
    float price;
    int quantity;
};

struct stores update(struct stores product, float p , int q);
float mul(struct stores stock);
//main() function begin

int main()
{
    float p_increment, value;
    int q_increment ;

    struct stores item = {"XYZ",25.75, 12};

    printf("\nInput increment values: ");

    printf("       price increment and quantity increment\n");

    scanf("%f %d",&p_increment, &q_increment);

    /*************************************************/
    item = update(item, p_increment, q_increment);
    /************************************************/
    printf("Updated values of item\n\n");
    printf("Name                :%s\n",item.name);
    printf("price               :%f\n",item.price);
    printf("Quantity            :%d\n",item.quantity);

    /************************************************/
    value = mul(item);
    /***********************************************/



    printf("\nValue of the item  = %f\n",value);



	getch();
	return 0;
}
///main() end
///update function

struct stores update(struct stores product, float p , int q)
{
    product.price += p;
    product.quantity += q;
    return(product);
};

///mul function

float mul(struct stores stock)
{
    return (stock.price*stock.quantity);
}
///program end

/**
output

Input increment values:        price increment and quantity increment
10 12
Updated values of item

Name                :XYZ
price               :35.750000
Quantity            :24

Value of the item  = 858.000000

Process returned 0 (0x0)   execution time : 13.536 s
Press any key to continue.


*/
