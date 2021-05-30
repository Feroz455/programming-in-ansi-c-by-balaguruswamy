/**
page 450
program exercises 13.4
13.4 Write a interactive program to create linear linked lists of customer names
and their telephone numbers.The program should be menu driven and include features
for adding a new customer and deleting an existing customer.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//main() function begin
/************************************************/
///structure definition
typedef struct _customer
{
    char name[30];
    char number[15];
}customer;

typedef struct linked_list
{
    customer cust;
    struct linked_list *next;
} node;
/*************************************************/
void printNewline(void);
void displayManu(void);
void printline(void );
void menu(node *head);
void create(node *list);
int count(node *list);
void print(node *list);
void insert(node *list);
void deleteNode(node **head, char *name);

/************************************************/

///main program start
int main(int argc,char *argv[])
{
    node *head;
    head = (node *)calloc(1, sizeof(node));
    menu(head);
    printf("\n\n\nBYE!!!\n\n\n");
	return 0;
}
///main() end

void menu(node *head)
{
    int i;
        printNewline();
    while(1)
        {
        printline();
        printline();
        displayManu();
        printf("ENTER YOUR OPTION\n\n");
        scanf("%d",&i);
        printline();
        printline();
        switch(i)
        {
        case 1:
            printf("\nValid input...\nCreate a Customer list\n");
            create(head);
            break;
        case 2:
            printf("\nValid input...\nCount Total Customer\n");
            printf("Total Customer  = %d\n",1+count(head));
            break;
        case 3:
            printf("\nValid input...\nPrint list\n");
            printf("%20s %20s\n\n", "Name", "Number");
            print(head);
            break;
        case 4:
            printf("\nValid input...\nInsert a new record\n");
            insert(head);
            break;
        case 5:
            printf("\nValid input...\nDELETE RECORD\n");
            char name[20];
            printf("Enter name\n");
            scanf("%s",name);
            deleteNode(&head, name);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("WRONG INPUTE\n\nTRY AGAIN!!!\n\n");
            break;
        }
        }
}

void create(node *list)
{
    printf("Enter name\n\nTO end Type \"end\"\t");
    scanf("%s",list->cust.name);
    if(strcmp((list->cust.name),"end") == 0)
    {
        list->next = NULL;
        return;
    }
    else
    {
        printf("Enter Telephone Number\n");
        scanf("%s",list->cust.number);
        list->next = (node *)calloc(1, sizeof(node));
        create(list->next);
    }
    return;
}
void insert(node *list)
{
    if(list->next == NULL)
    {
        list->next = (node *)calloc(1, sizeof(node));
        printf("Enter name\n\t");
        scanf("%s",list->cust.name);
        printf("Enter Telephone Number\n");
        scanf("%s",list->cust.number);
        list->next->next == NULL;
        return;
    }
    insert(list->next);
    return;
}

///Hi ha hi ha .....Use my pointer knowledge
///Don't afraid , i pass heads address not head value....
///i think you get it ..If you not .then you have poor idea in pointer
void deleteNode(node **head, char *name)
{
    if(strcmp((*head)->cust.name,name) == 0)
    {
        node *p = *head;
        (*head) = (*head)->next;
        free(p);
        return;
    }
    else
    {
        deleteNode(&((*head)->next),name);
    }
}


int count(node *list)
{
    if(list->next->next == NULL)
    {
        return(0);
    }
    else
    {
        return(1+count(list->next));
    }
}

///printing linked list

void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%20s %20s\n",list->cust.name, list->cust.number);
        if(list->next->next == NULL);
        print(list->next);
    }
}

void displayManu(void)
{
       printf("1\tCreate a Customer list\n"
               "2\tCount Total Customer\n"
               "3\tPrint list\n"
               "4\tInsert a new record\n"
               "5\tDELETE RECORD\n"
               "6\tEXIT\n"
               );
}
void printline(void )
{
        printf("\n");
        int i;
        for(i = 0; i < 56; i++)
        {
        printf("_");
        }
        printf("\n");
}
void printNewline(void)
{
        int i;
        for(i = 0; i < 10; i++)
        {
        printf("\n");
        }
}
///program end

/**
output
________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

1

________________________________________________________

________________________________________________________

Valid input...
Create a Customer list
Enter name

TO end Type "end"       Firoz
Enter Telephone Number
01625347975
Enter name

TO end Type "end"       Maliha
Enter Telephone Number
123654789
Enter name

TO end Type "end"       end

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

3

________________________________________________________

________________________________________________________

Valid input...
Print list
                Name               Number

               Firoz          01625347975
              Maliha            123654789

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

5

________________________________________________________

________________________________________________________

Valid input...
DELETE RECORD
Enter name
Firoz

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

3

________________________________________________________

________________________________________________________

Valid input...
Print list
                Name               Number

              Maliha            123654789

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

4

________________________________________________________

________________________________________________________

Valid input...
Insert a new record
Enter name
        Firoz
Enter Telephone Number
01625347915

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

3

________________________________________________________

________________________________________________________

Valid input...
Print list
                Name               Number

              Maliha            123654789
               Firoz          01625347915

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

2

________________________________________________________

________________________________________________________

Valid input...
Count Total Customer
Total Customer  = 2

________________________________________________________

________________________________________________________
1       Create a Customer list
2       Count Total Customer
3       Print list
4       Insert a new record
5       DELETE RECORD
6       EXIT
ENTER YOUR OPTION

6

________________________________________________________

________________________________________________________

Process returned 0 (0x0)   execution time : 69.284 s
Press any key to continue.
*/
