#include <stdio.h>

int main()
{
    int x,y,z;
    float w;

    y = 4;
//    printf("before y is %d\n",y);
    y = 9;
//    printf("after y is %d",y);

    // operation two, unary "-"
    x = -y+2;
//    printf("result of operation two : %d\n", x);

   // operation three, modulo(%)
//    printf("result of operation three(modulo) : %d\n", x%4);

   // operation three, * and /
    w = 7*9/7*9;
//    printf("result of operation three(* and /) : %f\n", w);

   // operation four,binary "-","+"
    z = 6 + 10;
//    printf("result of operation four(+) : %d\n", z);
    z = 6 - 10;
//    printf("result of operation four(-) : %d\n", z);

    // all in one
    w = 4-2*5-7+5*(20%3+16)/8%5;
    printf("the result of all in one operation: %f\n",w);

        ///step 1
    w = 4 - 2*5 - 7 + 5*18/8%5;
     ///step 2
    w = 4 - 10 - 7 + 1;
        ///step 3
    w = -12;



    return 0;
}








