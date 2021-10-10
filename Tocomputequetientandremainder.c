/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int dividend ,divisor ,quotient ,remainder ;
   scanf("%d",&dividend);
   scanf("%d",&divisor);
   quotient=dividend/divisor;
   remainder=dividend%divisor;
   printf("Quotient:%d",quotient);
   printf("\nRemainder:%d",remainder);
    

    return 0;
}
