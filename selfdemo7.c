/*Q7. Write a program to find diametre, circumference and radius of the circle using Functions*/
#include <stdio.h>
float length(float a, float b, float c, float d)
{
     float result = 0;
     result = (a*b);
   
     return result;
}
float circum (float a, float b, float c, float d)
{
     float result = 0;
     result = (a*c);

     return result ;
}
float radii(float a, float b, float c, float d)
{
     float res = 0;
     res = (a*d);

     return res;
}
int main()
{    
     float circle = 2.45;
     float diametre = 3.14;
     float circumference = 2*3.14/2;
     float radius = 3.14/2;

     float ans = 0;
     float uttar = 0;
     float ions = 0;
     
     ans= length(circle, diametre, circumference, radius);
     uttar= circum(circle, diametre, circumference, radius);
     ions = radii(circle, diametre, circumference, radius);

     printf("%f", ans);
     printf("   \n    %f", uttar);
     printf("\n %f", ions);

     return 0;
}