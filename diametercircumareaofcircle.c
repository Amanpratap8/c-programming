/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float  r,diameter, circumference,area;
  
  scanf("%f",&r);
   diameter=2*r;
   circumference=2*3.14*r;
   area=3.14*r*r;
   printf("Diameter:%f",diameter);
   printf("\nCircumference:%f",circumference);
   printf("\nArea:%f",area);
    

    return 0;
}
