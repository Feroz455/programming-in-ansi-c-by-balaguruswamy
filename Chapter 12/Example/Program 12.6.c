/**
page 410
program 12.6
Write a program to append additional items to the file INVENTORY created in program 12.3
and print the total content of the file.

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin
struct invent_record
{
    char name[10];
    int number;
    float price;
    int quantity;
};
int main()
{
    struct invent_record item;
    char filename[10];
    int response;

    FILE *fp;

    long n;

    void append(struct invent_record *x, FILE *y);
    printf("Type Filename:\n");
    scanf("%s",filename);
    getchar();

    fp = fopen(filename, "a+");
    do
    {
        append(&item, fp);
        printf("\nItem %s appended.\n",item.name);
        printf("\nDo you want to add another item\n(1 for YES   0 for NO)?");
        scanf("%d",&response);
    }while(response == 1);

    n = ftell(fp);
    fclose(fp);

    fp = fopen(filename , "r");

    while(ftell(fp) < n)
    {
        fscanf(fp, "%s %d %f %d", item.name, &item.number, &item.price, &item.quantity);
        fprintf(stdout,"%-8s %7d %8.2f %8d\n", item.name, item.number, item.price, item.quantity);
    }
    fclose(fp);
	getch();
	return 0;
}
///main() end
void append(struct invent_record *product, FILE *ptr)
{
    printf("Item name\n");
    scanf("%s",product->name);
    printf("Item number\n");
    scanf("%d",&product->number);
    printf("Item price\n");
    scanf("%f",&product->price);
    printf("Quantity\n");
    scanf("%d",&product->quantity);
    fprintf(ptr ,"%s %d %.2f %d", product->name, product->number, product->price, product->quantity);
}
///program end

/**
output
Type Filename:
INVENTORY
Item name
xxx
Item number
444
Item price
40.50
Quantity
34

Item xxx appended.

Do you want to add another item
(1 for YES   0 for NO)?1
Item name
YYY
Item number
555
Item price
50.50
Quantity
45

Item YYY appended.

Do you want to add another item
(1 for YES   0 for NO)?0
AAA-1        111    17.50      115
BBB-2        125    36.00       75
C-3          247    31.75      104
xxx          444    40.50       34
YYY          555    50.50       45

Process returned 0 (0x0)   execution time : 58.762 s
Press any key to continue.
*/
