/*Q13. Tax Slabs*/
#include <stdio.h>
int main()
{
     int income = 0;
     int taxslab = 0;

     printf("Enter your Income :\n");
     scanf("%d", &income);

     if((income >=5000000))
     {
          taxslab = 1;
     }
     else if ((income >=3000000))
     {
          taxslab = 2;
     }
     else if ((income >= 1800000))
     {
          taxslab = 3;
     }
     else if ((income >=1200000))
     {
          taxslab = 4;
     }
     else if ((income >=800000))
     {
          taxslab = 5;
     }
     else if ((income <=500000))
     {
          taxslab = 6;
     }

     printf("Your taxslab  :\n");
     
     switch(taxslab)
     {
          case 1:
          printf("You come under 40% bracket \n");
          break;

          case 2:
          printf("You come under 30% bracket \n");
          break;

          case 3:
          printf("You come under 25% bracket \n");
          break;

          case 4:
          printf("You come under 18% bracket \n");
          break;

          case 5:
          printf("You come under 10% bracket \n");
          break;

          case 6:
          printf("You can rebate your TAX \n");
          break;

          default:
          printf("Invaild Income");
     }
     return 0;
}