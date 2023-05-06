/*Q6. Write a program in C to find the square of any number using the function.*/
#include <stdio.h>
int Square (int a)
{
     int Result = 0;
     Result = (a*a);
     return Result;
}
int main ()
{
     int No1 = 4;
     int Ans = 0;

     Ans= Square(No1);

     printf("%d", Ans);

     return 0;
}