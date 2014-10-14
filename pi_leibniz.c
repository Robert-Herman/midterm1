/*
*
*
*/

#include <stdio.h>

double pi_leibniz(int n)
{
    int i;
    double sign = 1.0;
    double denom = 1.0;
    double pi = 0.0;
    for (i = 0; i <= n; i++)
    {
        pi = pi + (sign/denom);
        denom = denom + 2;
        sign = sign * -1.0;
    }
    pi = pi * 4;
    return pi;
}
