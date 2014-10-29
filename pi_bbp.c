/*
   Calculation of pi using the Bailey-Borwein-Plouffe series
*/

#include <math.h>

double pi_bbp(int n)
{
    double kCon;
    double pi = 0;
    double eightT;
    int i;
    for (i = 0; i <= n; i++)
    {
        eightT = 8.0*i;
        kCon = pow(16,i);
        pi = pi + (((4.0/(eightT+1.0))-(2.0/(eightT+4.0))-(1.0/(eightT+5.0))-(1.0/(eightT+6.0)))/kCon);
    }
    
    return pi;  
}
