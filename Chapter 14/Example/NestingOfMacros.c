#include"RagularCtoken.c"
#define M 5
#define N M+1
#define SQUARE(x) ((x)*(x))
#define CUBE(x) (SQUARE(x)*(x))
#define SIXTH(x) (CUBE(x)*CUBE(x))
#define HALF(x) ((x)/2.0)
#define Y       HALF(HALF(x))

START

printf("23 cube is = %d\n",CUBE(23));

END
