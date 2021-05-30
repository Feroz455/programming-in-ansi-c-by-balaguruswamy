///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct vector
{
    int array[100];
    int len;
};
void printLine(void);
void displayMassage(void);
void printNewLine();
void printMainMenu(void);
void displayVector(struct vector a);
struct vector choice(struct vector a);
int addition(struct vector a, struct vector b);
struct vector  makeVector(struct vector a);
struct vector  EnterNewVector(struct vector a);
struct vector  multiplyVector(struct vector a);
struct vector modifyAllVector(struct vector a);
struct vector modifySingleVector(struct vector a);



///user choice
struct vector choice(struct vector a)
{
    int cho;
    while(1)
    {
        scanf("%d",&cho);
        switch(cho)

        {
        case 1:
            printf("\t1: MAKE A NEW VECTOR ARRY\n");
            a =  makeVector(a);
            printMainMenu();
            break;
        case 2:
            printf("\t2: ENTER new vector at the end of the vector array\n");
             a = EnterNewVector(a);
            printMainMenu();
            break;
        case 3:
            printf("\t3: UPDATE all vector elements\n");
            a = modifyAllVector(a);
             printMainMenu();
             break;
        case 4:
            printf(" \t4: UPDATE Single vector elements\n");
            a = modifySingleVector(a);
            printMainMenu();
            break;
        case 5:
            printf( "\t5: MULTIPLY vector with a scalar value\n");
            a =  multiplyVector(a);
            printMainMenu();
            break;
        case 6:
             printf( "\t6: DISPLAY the vector\n");
             displayVector(a);
             printMainMenu();
             break;
        case 7:
            return(a);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("WRNG CHOICE TRY AGAIN");
            break;
        }
    }
}
void printMainMenu(void)
{
	printf("\n\n\n*** STRUCT-VEC MAIN MENU ***\n"
	       "Valid Choices:\n"
	       "\t1: MAKE A NEW VECTOR ARRY\n"
	       "\t2: ENTER new vector at the end of the vector array\n"
           "\t3: UPDATE all vector elements\n"
           "\t4: UPDATE Single vector elements\n"
	       "\t5: MULTIPLY vector with a scalar value\n"
	       "\t6: DISPLAY the vector\n"
	       "\t7: Return vector to main function\n"
	       "\t8: EXIT program\n"
	       "Enter your choice: ");
}
///Totally new vector from scartch
struct vector makeVector(struct vector a)
{
    int i = 0;
    printf("Enter the elements of vector -1 to quit\n");
    scanf("%d",&a.array[i]);
    while(a.array[i] != -1 && i < 100)
    {
         scanf("%d",&a.array[++i]);

    }
    a.len = i;
    return(a);
}
///Adding new value after old value
struct vector EnterNewVector(struct vector a)
{
    int i = a.len;
    printf("Enter the elements of vector -1 to quit\n");
    scanf("%d",&a.array[i]);
    while(a.array[i] != -1 && i < 100)
    {
         scanf("%d",&a.array[i]);
    }
    a.len = i;
    return(a);
}
///displaying vector
void displayVector(struct vector a)
{
    int i;
    for( i = 0;  i< a.len; i++)
    {
        printf("%d \t",a.array[i]);
    }
    printf("\n");
    return;
}
///multiplying vector with scalar value
struct vector multiplyVector(struct vector a)
{
    int num;
    printf("Enter your Scalar value\n");
    scanf("%d",&num);
     int i;
    for( i = 0; i<a.len; i++)
    {
        a.array[i] *= num;
    }
    return(a);
}
///modify all vector from start position
struct vector modifyAllVector(struct vector a)
{
    int i;
    for(i  = 0; i < a.len; i++)
    {
        scanf("%d",a.array[i]);
    }
    return(a);
}
///modifying a single vector with its index value
struct vector modifySingleVector(struct vector a)
{
    int index, num;
    printf("Enter index value\n");
    scanf("%d",&index);
    printf("Enter new value\n");
    scanf("%d",&num);

    a.array[index-1] = num;
    return(a);

}

void printNewLine()
{
    int i;
    for(i = 0; i<20; i++)
        printf("\n");
}

void printLine()
{
    int i;
    for(i = 0; i< 72; i++)
    {
        printf("_");
    }
    printf("\n");
}
void displayMassage()
{
    printf("VECTOR STRUCT TO HOLD, DISPLAY, MANIPULATE INTEGER ELEMENTS\n");

}
///Addition of two vector
int addition(struct vector a, struct vector b)
{
    int i,sum;
    for(i = 0; i < a.len; i++)
    {
        sum = a.array[i];
    }
    for(i = 0; i < b.len; i++)
    {
        sum = b.array[i];
    }
    return(sum);
}
///program end
