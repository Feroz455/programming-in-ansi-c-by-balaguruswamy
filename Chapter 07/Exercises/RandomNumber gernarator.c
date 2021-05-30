#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    srand((unsigned int)**main + (unsigned int)&argc + (unsigned int)time(NULL));
    srand(rand());

    int i;
    for (i = 0; i < 60; i++)
    {
          printf("%d ", rand()%(100+ 1 - 1)+ 1);
          if(i%4 == 0)
            printf("\n");
    }
        getch();
}
/*27401
20176
22276
32066
428
13296
12235
20657
2890
13197*/

