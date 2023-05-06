/*Q3.You are in a long distance relationship with _______. You have $900 right now and you give $500
to Nitika for her Birthday i.e 20th Oct. How much Money do you have right now?*/
#include <stdio.h>
int subtract (int a, int b)
{
     int Result = 0;
     Result = (a-b);
     return Result;
}
int main ()
{
     int money = 900;
     int gift = 500;
     int money_left = 0;

     money_left = subtract(money,gift);

     printf("%d ", money_left);
     printf("Thank you MAitreya :)<3");

     return 0;
}