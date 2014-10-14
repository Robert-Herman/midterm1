/*
*
*/

#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
    clock_t begin, end;
    int i;
    int nL;
    int n = 100000;
    double pi_L;
    double pi_B;
    double t_leibniz;
    double t_bbp;
    
    for (i = 1; i <= 10; i++)
    {
        nL = n * i;
        pi_L = pi_leibniz(nL);    
        printf("%8d   %20.15f   %20.15f\n", nL, pi_L, fabs(pi_L - M_PI2));
    }
    printf("\n");
    for (i = 0; i <= 3; i++)
    {
        pi_B = pi_bbp(i);
        printf("%8d   %20.15f   %20.15f\n", i, pi_B, fabs(pi_B - M_PI2));  
    }
    begin = clock();
    pi_L = pi_leibniz(700000000);
    end = clock();
    t_leibniz = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time leibniz = %f\n", t_leibniz);
    begin = clock();
    pi_L = pi_bbp(30000000);
    end = clock();
    t_bbp = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time bbp = %f\n", t_bbp);
    /*printf("%21.0f \n", t2/t1);*/
    
    return 0;
}
