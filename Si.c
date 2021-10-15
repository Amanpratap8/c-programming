/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float P,R,N,SI;
    scanf("%f",&P);
    scanf("%f",&R);
    scanf("%f",&N);
    SI=(P*N*R)/100;
    printf("Simple Interest: %f",SI);
    
    
    return 0;
}

