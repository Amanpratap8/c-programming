/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_d,y,w,d;
    scanf("%d",&n_d);
    y=n_d/365;
    w=(n_d%365)/7;
    d=(n_d%365%7);
    printf("%d = %d Years %d Week %d Days\n",n_d,y,w,d);

    return 0;
}
