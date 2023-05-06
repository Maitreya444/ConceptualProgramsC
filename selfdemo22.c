#include <stdio.h>
#include "selfdemo22.h"
int main()
{    
     struct Demo obj;

     printf("Inside main \n");

     printf("Rate of Intrest is %f\n", ROI); //10.7

     printf("Fees of LB batch is %d\n", FEES);    //18200

     printf("Size of demo Structure is %d\n", sizeof(obj)); //8

     return 0;
}