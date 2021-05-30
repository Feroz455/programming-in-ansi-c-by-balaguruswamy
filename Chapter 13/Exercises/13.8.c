/**
page 450
program 13.8
13.8 Write a program to construct an ordered doubly linked list and write out the contents of
a specified node


*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
///Structure define
typedef struct linked_list
{
    int number;
    struct linked_list *next;
    struct linked_list *pre;
}node;

void create(node *list);
void print(node *list);
void reversePrint(node *list);
node *tails;
void search(node *list);


//main() function begin

int main(int argc,char *argv[])
{
    node *head;
    head = (node *)calloc(1, sizeof(node));
    head->pre = NULL; ///First head node's pre will be null...before head node there is no data right???
    create(head); ///call create  . To create linked list
    print(head);
    printf("\n\n");

    reversePrint(tails);
    search(head);

    getch();
	return 0;
}
///main() end
/**
every thing was done here
for reverse///actually
    program is very easy.But you have to think.
    i repeat again you have to think how you gonna solve this problem.
    Don't mind If speak to much just ignore it ,Actually I'm super excited
*/
void create(node *list)
{
    printf("Enter number (-999) to end \t");
    scanf("%d",&list->number);
    if(list->number == -999)
    {
        list->next = NULL;
        tails = list;///think recursively first. try to get else part
        /// encounter --999 put last nodes address into tails ///we are done here ..now do anything want you can do with your code
    }
    else
    {
        list->next = (node*)calloc(1, sizeof(node));
        list->next->pre = list; ///When ever \allocating space for new linked list ..put head value into pre.thats it..code is done
        create(list->next);
    }
}

///printing record reverse with Iteration method
void reversePrint(node *list)
{
    while(list->pre != NULL)
    {
        printf("%d-->",list->number);
        if(list->pre->pre == NULL)
        {
            printf("%d",list->pre->number);
            return;
        }
        list = list->pre;
    }
    return;
}
///Printing recode
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->",list->number);
        if(list->next->next == NULL)
        {
            printf("%d ",list->next->number);
            return;
        }
    }
    print(list->next);
}

void search(node *list)
{
    int i, j, check = 0;
    printf("\n\nEnter node number\n\n");
    scanf("%d",&j);
        for(i = 0; i < j, list->next != NULL; i++, list = list->next)
        {
            if(i == (j-1))
            {
                   printf("\n\nNumber %d node contain = %d value\n\n",j,list->number);
                   check = 1;
                   return ;
            }

        }
        if(check == 0)
        {
            printf("There is no Such Node in list\n");
        }
        return;

}

/**
output
Enter number (-999) to end      1
Enter number (-999) to end      4
Enter number (-999) to end      7
Enter number (-999) to end      8
Enter number (-999) to end      5
Enter number (-999) to end      2
Enter number (-999) to end      3
Enter number (-999) to end      6
Enter number (-999) to end
8
Enter number (-999) to end      5
Enter number (-999) to end      -999
1-->4-->7-->8-->5-->2-->3-->6-->8-->5-->-999

-999-->5-->8-->6-->3-->2-->5-->8-->7-->4-->1Enter node number

5
Number 5 node contain = 5 value


Process returned 0 (0x0)   execution time : 22.426 s
Press any key to continue.

*/
