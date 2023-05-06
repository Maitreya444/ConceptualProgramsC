/*Q15. Write a function to calculate area and peremetere of a Rectangle*/
#include <stdio.h>
float haarea(float a, float b)
{
     float Result =0;
     Result = (a*b);
     return Result;
}
float haperemetre(float a, float b)
{
     float Result =0;
     Result =(2*(a+b));
     return Result ;
}
int main()
{
     float length = 0;
     float width = 0;
     float area_shod = 0;       // l*w
     float peremetre_shod = 0; // 2(l+w)

     printf("Enter the length : \n");
     scanf("%f", &length);
     printf("Enter the width : \n");
     scanf("\n %f", &width);

     area_shod = haarea(length, width);                   //printf("Enter the length : \n");//
     peremetre_shod = haperemetre(length, width);        // scanf("%f", &length);//
                                                            /*printf("Enter the width : \n");
                                                            scanf("%f", &width);*/
     printf("%f", area_shod);                               /////// ABOVE MISTAKE COMMENT/////
     printf("\n %f", peremetre_shod);

     return 0;    
}
/*I did a mistake here and that is I should have taken the inputs from the user and then
I should go to another function so that it calculates and gives answer instead of 0.00000

and 2nd mistake was at line 25 and line 32 not initializing \n. */