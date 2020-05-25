#include <stdio.h>


int main()
{
    int i;

   printf("Multiplication Table\n");
    for(i = 1; i<=10; i++ )
    {
        for(j = 1; j<=10; j++)
        {
            printf("%d x %2d = %2d\n",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
