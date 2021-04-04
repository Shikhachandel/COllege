#include <usbstk5515.h>
#include<stdio.h>
#include <math.h>
#define PTS 40 //no of points for FFT
#define PI 3.14159265358979
float output;
float y[40];
void main()
{
int n;
for (n=0; n<PTS; n++)
{
/*y[n]=A•y[n–1]+B•y[n–2] A=1.9754 and B=–1. Examining the behavior
of this IIR filter by its transfer function as below:
//y[n] = 1.9754•y[n–1] – y[n–2] */
if(n<2)
y[n]=sin(2*PI*n/PTS);
else
y[n]=(1.9754*y[n-1])-(y[n-2]);
printf("%f,",y[n]);
}
}