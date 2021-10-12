/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float celsius,fahrenheit;
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*0.55;
    printf("Temperature in Celsius:%f",celsius);
    return 0;
}
