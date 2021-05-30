/**
page 390
Case Study 2
Inventory Updating
The price and quantity of items stocked in a store changes every day.
They may either increase or decrease.The program in fig 11.16 reads the
incremental values of price and quantity and computers the total value of the items in stock


*/

///program begin
#include<stdio.h>
#include<conio.h>
struct stores
{
    char *name;
    float price;
    int quantity;
};
float mul(struct stores *stock);
void update(struct stores *product, float p,int q);

//main() function begin

int main()
{


    float p_increment, value;
    int q_incremet;

    struct stores item = {"XYZ", 25.75, 12};
    struct stores *ptr = &item;

    printf("\nInput increment values:  ");
    printf("Price increment and quantity increment\n");
    scanf("%f %d",&p_increment, &q_incremet);



    /***************************************/
    update(&item, p_increment, q_incremet);
    /***************************************/
    printf("Updated values of item\n\n");
    printf("Name        :%s\n",ptr->name);
    printf("Price       :%f\n",ptr->price);
    printf("Quantity    :%d\n",ptr->quantity);

    //------------------------------------------/
    value = mul(&item);
    //------------------------------------------/

    printf("\nValue of the item\n");


	getch();
	return 0;
}
///main() end
void update(struct stores *product, float p,int q)
{
    product-> price += p;
    product-> quantity += q;
}

float mul(struct stores *stock)
{
 return(stock->price * stock->quantity);
}
///program end

/**
output

*/
