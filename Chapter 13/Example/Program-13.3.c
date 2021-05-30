/**
page 433
program 13.3
Write a program to create a linear linked list interactively
and print out using the statement.

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node; /// Node type defined
node *find(node *p, int a);

void create(node *p);
    int count(node *p);
    void print(node *p);
//main() function begin

int main(int argc,char *argv[])
{
    node *head;

    head = (node*)calloc(1,sizeof(node));///calloc is working //malloc make program hibijibi
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    printf("\nNumber of items = %d\n",count(head));
	getch();
	return 0;
}
///main() end
void create(node *list)
{
    printf("Input a number\n");
    printf("Type -999 at end\n");
    scanf("%d",&list->number);///Create current node
    if(list-> number == -999)
    {
        list->next == NULL;

    }
    else
    {
        list->next = (node *) calloc(1,sizeof(node));///calloc is working //malloc make program hibijibi
        create(list->next); ///Recursion occurs
    }

    return;

}

void print(node *list)
{
    if(list-> next != NULL)
    {
        printf("%d-->",list->number);///print current item
    ///printf("Im End here\n\n\n");
    ///If  you use malloc then uncomment first if condition ...other wise use calloc
      //  if(list->next->number == -999)///-_- changed logic here ......don't know way book's logic is not working
        if(list->next->next == NULL)
        {
            printf("%d",list->next->number);

           // return;///also need this return ...without this program will run infinity
        }

        print(list->next);///move to next item
    }

    return;
}

int count(node *list)
{
       ///If  you use malloc then uncomment first if condition ...other wise use calloc
   // if(list->number == -999)///-_- changed logic here ......don't know way book's logic is not working

    if(list->next == NULL)
    {
        return(0);
    }
    else
        return(1+count(list->next));
}

node *insert(node *head)
{

    node *new;  /// Pointer to new node
    node *n1; /// pointer to node preceding key node
    int key;
    int x;
    printf("Value of new item\n");
    scanf("%d",&x);
    printf("Value of key item ? (type -999 if last)")
    scanf("%d",&key);

    if(head->number == key) ///New node is first
    {
        new = (node *)calloc(1, sizeof(node));
        new->number = x;
        new->next = head;
        head = new;
    }
    else /// find key node and insert new code
    {
        ///Before the key node
        n1 = find(head, key);///find key node

        if(n1 == NULL)
        {
            printf("Key is not found\n");

        }
        else /// insert new node
        {
            new = (node *)calloc(1, sizeof(node));
            new->number = x;
            new->next = n1->next;
            n1->next = new;
        }


    }
    return(head);

}


node *find(node *list, int key)
{
    if(list->next->number == key) ///key found
    {
        return(list);
    }
    else if(list->next->next == NULL)
        return(NULL);
    else
        find(list->next,key);
}


node *delete(node *head)
{

    int key; /// Item to be deleted
    node *n; ///Pointer to node preceding key node;
    node *p; /// Temporary pointer
    printf("\nWhat is the item (NUMBER) to be deleted? \n");
    scanf("%d",&key);

    if(head->number== key) ///First node to be deleted
    {
        p = head->next; /// pointer to 2nd node in list
        free(head);
        head = p;
    }
    else
    {
        n  = find(head, key);
        if(n == NULL)
        {
            printf("\nKey not found\n");
        }
        else ///delete to the node
        {
            p = n->next->next;/// pointer to the node following the key node
            free(n->next);    ///free key node
            n->next = p;      ///establish link
        }
    }
    return(head);
}
///program end

/**
output
Input a number
Type -999 at end
14
Input a number
Type -999 at end
5
Input a number
Type -999 at end
8
Input a number
Type -999 at end
4
Input a number
Type -999 at end

32
Input a number
Type -999 at end
-999

14-->5-->8-->4-->32-->-999

Number of items = 5

Process returned 0 (0x0)   execution time : 7.890 s
Press any key to continue.
*/
