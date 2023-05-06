//Q1. Saksh gave you $400 on Monday and $800 on Tuesday. How much money did you recieve from her?

#include <stdio.h>
int kitideiche (int a, int b)
{
     int result =0;
     result = a+b;
     return result;
}
int main()
{
     int udhari1 = 400;
     int udhari2 = 800;
     int totalpaise = 0;

     totalpaise = kitideiche(udhari1, udhari2); 

     printf("%d", totalpaise);
     return 0;
}