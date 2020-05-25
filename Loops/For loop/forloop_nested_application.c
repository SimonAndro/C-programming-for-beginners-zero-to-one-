#include <stdio.h>


int main()
{
    int i;

    for (i = 1;i<11; i ++)
    {

        for(j = 1; j<11; j++)
        {
            printf("%2d x %2d = %2d\n",i,j,i*j);
        }
        printf("\n");

    }


    return 0;
}
