/**
page 450
program exercises 13.3
13.3  Write recursive and non-recursive functions for reversing
the elements in a linear list
compare the relative efficiencies of them
*/
/**MAAAAAANNNNNNN Im so happy if you solve this problem without any
 help you will feel the same of  this moment  I love myself.Yes Yes I did it*/
///program begin
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
void reversePrintIterationMethod(node *list);
node *tails;


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
    printf("\n\n");
    reversePrintIterationMethod(tails);

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
///printing record reverse with recursive function
void reversePrint(node *list)
{
    if(list->pre != NULL)
    {
        printf("%d-->", list->number);
        if(list->pre->pre == NULL)
        {
            printf("%d",list->pre->number);
            return;
        }
    }
    reversePrint(list->pre);
}
///printing record reverse with Iteration method
void reversePrintIterationMethod(node *list)
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
///program end

/**
output
Enter number (-999) to end      1
Enter number (-999) to end      4
Enter number (-999) to end      7
Enter number (-999) to end      8
Enter number (-999) to end      5
Enter number (-999) to end      2
Enter number (-999) to end      33
Enter number (-999) to end      26
Enter number (-999) to end      6
Enter number (-999) to end      4
Enter number (-999) to end      1
Enter number (-999) to end      4
Enter number (-999) to end      1
Enter number (-999) to end      6
Enter number (-999) to end      6
Enter number (-999) to end
16
Enter number (-999) to end      541
Enter number (-999) to end      1
Enter number (-999) to end
4+
Enter number (-999) to end      Enter number (-999) to end      4
Enter number (-999) to end      1
Enter number (-999) to end      541
Enter number (-999) to end      13
Enter number (-999) to end      1
Enter number (-999) to end      54
Enter number (-999) to end      51
Enter number (-999) to end      1
Enter number (-999) to end      4
Enter number (-999) to end      654
Enter number (-999) to end      -999
1-->4-->7-->8-->5-->2-->33-->26-->6-->4-->1-->4-->1-->6-->6-->16-->541-->1-->4-->0-->4-->1-->541-->13-->1-->54-->51-->1-->4-->654-->-999

-999-->654-->4-->1-->51-->54-->1-->13-->541-->1-->4-->0-->4-->1-->541-->16-->6-->6-->1-->4-->1-->4-->6-->26-->33-->2-->5-->8-->7-->4-->1

-999-->654-->4-->1-->51-->54-->1-->13-->541-->1-->4-->0-->4-->1-->541-->16-->6-->6-->1-->4-->1-->4-->6-->26-->33-->2-->5-->8-->7-->4-->1
Process returned 0 (0x0)   execution time : 35.342 s
Press any key to continue.
*/
