/**
page 450
program 13.5
13.5 Modify the above program so that the list is always maintained in the alphabetical order
of customer names

*/
///Finally this program working ..It takes my whole day ......
///I don't know why ...but im not happy....
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
void menu();
node * create(node *list);
int count(node *list);
void print(node *list);
void insert(node *list);
void deleteNode(node **head, char *name);
node *insert_sort(node *list,char *name);

/************************************************/

///main program start
int main(int argc,char *argv[])
{
    menu();
	return 0;
}
///main() end

void menu()
{
    int i;
    char name[20];
    node *head = NULL;
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
            head = create(head);
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
            scanf("%s",name);
            head = insert_sort(head,name);
            break;
        case 5:
            printf("\nValid input...\nDELETE RECORD\n");
            char name2[20];
            printf("Enter name\n");
            scanf("%s",name2);
            deleteNode(&head, name2);
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

node *create(node *head)
{
        char name[20];
        printf("Enter name\n\nTO end Type \"end\"\t");
        scanf("%s",name);

            while((strcmp(name, "end")) != 0)
            {
                if(head == NULL)  /// create base node
                {
                    head = (node *)calloc(1, sizeof(node));
                    strcpy(head->cust.name, name);
                    printf("Enter phone number\n");
                    scanf("%s",head->cust.number);
                    head->next = NULL;
                }
                else   ///Insert next item
                {
                    head = insert_sort(head, name);
                }
                printf("\nEnter name\n\nTO end Type \"end\"\t");
                scanf("%s",name);
            }
        return(head);
}
node *insert_sort(node *list,char *name)
{
    node *p1, *p2, *p;
    p1 = NULL;
    p2 = list;

    for(; strcmp(p2->cust.name, name) < 0 ; p2 = p2->next)
    {
        p1 = p2;
        if(p2->next == NULL)
        {
            p2 = p2->next; ///p2 set to NULL
            break;         ///insert new node at end
        }
    }



    ///key node found
    p = (node*) calloc(1, sizeof(node));///space for new node
    strcpy(p->cust.name, name);
    printf("Enter phone number\n");
    scanf("%s",p->cust.number);
     /// place value in the new node



    p->next = p2;
    if(p1 == NULL)
    {
        list = p;   ///new node becomes first node
    }
    else
        p1->next = p; /// new node inserted after 1st node
    return(list);
}


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
        return(1);
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
        if(list->next->next == NULL)
        {
            printf("%20s %20s\n",list->next->cust.name, list->next->cust.number);
        }
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

TO end Type "end"         Abul                 7461
Enter phone number

Enter name

TO end Type "end"                      Firoz                75386
Enter phone number

Enter name

TO end Type "end"                     Maliha               741852
Enter phone number

Enter name

TO end Type "end"                      Talha                15945
Enter phone number

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

5

________________________________________________________

________________________________________________________

Valid input...
DELETE RECORD
Enter name
Talha

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

                Abul                 7461
               Firoz                75386
              Maliha               741852

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

Process returned 0 (0x0)   execution time : 21.879 s
Press any key to continue.
*/
