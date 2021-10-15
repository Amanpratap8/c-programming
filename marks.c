/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int maths,phy,chem,hindi,eng;
    float avg,total,percentage;
    scanf("%d%d%d%d%d",&maths,&phy,&chem,&hindi,&eng);
    total=maths+phy+chem+hindi+eng;
    avg=total/5.0;
    percentage=(total/500.0)*100;
    printf("Total Marks :%f\n",total);
    printf("Average:%f\n",avg);
    printf("Percentage:%f",percentage);
   
    
    
    
    
    return 0;
}

