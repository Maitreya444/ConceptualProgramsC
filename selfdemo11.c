/*Q11.There's a girl named Phoebe who's independent and Rich. Now She wants to marry a Guy who earns more than 299000. 
There are 2 Guys and both earn same, now if guy A becomes bankcrupt she'll marry Guy B.  */

#include <stdio.h>
int main()
{
     int guy_income = 299000;
     printf("Guys please enter your bank balance... \n");
     scanf("%d", &guy_income);

     if((guy_income > 299000))
     {
          printf("Choose this Guy");
     }
     else
     {
          printf("Getover this Guy and marry another");
     }
     return 0;

}