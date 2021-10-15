/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{ 
    float P,R,T,CI;
    scanf("%f",&P);
    scanf("%f",&R);
    scanf("%f",&T);
    CI=P* pow(((1+R)/100),T);
    printf("Compound Interest: %f",CI);
    
    
    return 0;
}



