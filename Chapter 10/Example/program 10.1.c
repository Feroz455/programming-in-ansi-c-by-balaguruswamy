
/**
page 327
program 10.1
Explain how complex number can be represent using structures.Write
two C Function: One to return the sum of to complex numbers passed as
parameters
*/

///program begin
#include<stdio.h>
#include<conio.h>
//main() function begin
struct complex///Declaring the complex number datatype using structure
{
    double real; //real part
    double img;///Imaginary part
};
struct complex add(struct complex cl, struct complex c2);
struct complex add(struct complex cl, struct complex c2);
int main()
{

	getch();
	return 0;
}
///main() end
struct complex add(struct complex cl, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real+c2.real;
    c3.img =  c1.img+c2.img;
    return (c3);

};

struct complex add(struct complex cl, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real* c2.real - c1.img * c2.img;
    c3.img =  cl.real*c2.img+c1.img*c2.real;
    return (c3);

};
///program end

/**
output

*/
