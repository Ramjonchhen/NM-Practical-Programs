#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // consider the initial y' as y' = x^2 - y^2
    float x0,y0,x,y,dx,dxx,dxxx;

    printf("\n Enter the initial condition x and y: ");
    scanf("%f%f",&x0,&y0);

    printf("\n Enter x at which function is to be evaluated: ");
    scanf("%f",&x);

    // finding the values of y',y'',y'''
    dx   = x0 - pow(y0,2);
    dxx  = 1- 2 * y0 * dx;
    dxxx = -2 * pow(dx,2) - 2 * y0 * dxx;

    // calculating value of y for the respective value of input x
    float diffx = x - x0;
    y = y0 + diffx * dx + pow(diffx,2) * dxx / 4  + pow(diffx,3) * dxxx/ 6 ;
    printf("\n The respected value of y for x: %f is %f",x,y);
    return 0;
}
