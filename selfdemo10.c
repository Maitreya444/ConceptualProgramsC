/* Switch Cases */
#include <stdio.h>
int main()
{
     int Std =0;

     printf("Enter your Standard...\n");
     scanf("%d", &Std);

     switch(Std)
     {
          case 1:
               printf("Your Exam is at 1 PM \n");
               break;
          case 2:
               printf("Your Exam is at 2 PM \n");
               break;
          case 3:
               printf("Your Exam is at 3 PM \n");
               break ;
          case 4:
               printf("Your Exam is at 4 PM \n");
               break ;

          default:
          printf("Invaild Standard");
     }
     return 0;
}