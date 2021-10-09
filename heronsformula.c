/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s,aera;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    aera=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",aera);
    return 0;
}