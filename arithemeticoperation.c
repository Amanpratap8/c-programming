/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,sum,diff,mul,div,rem;
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("Sum of number :%d",sum);
    printf("\nSubstaction of  number:%d",diff);
    printf("\nmultiplication of number:%d",mul);
    printf("\ndivision of number:%d",div);
    printf("\nRemainder of number:%d",rem);
    
    
    
    
    return 0;
}
