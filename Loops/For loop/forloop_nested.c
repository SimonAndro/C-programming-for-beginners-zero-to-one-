#include <stdio.h>


int main()
{
    int i,j;

    for (i = 25;i>0; i = i - 5)
    {
        printf("############# ");
        printf("i is %d\n",i);
        for(j = 0; j<5; j++)
        {
            printf("j is %d\n",j);
        }
        
    }

    return 0;
}
