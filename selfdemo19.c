/*Q19. This program will read weekday number and print its corresponding week name switch case 
statement in C language.*/
#include <stdio.h>
int main()
{
     int day = 0;

     printf("Enter no of day in a week (0-6):");
     scanf("%d", &day);

     switch(day)
     {
     case 0:
     printf("0th Day is Sunday");
     break;

     case 1:
     printf("1st Day is Monday");
     break;

     case 2:
     printf("2nd Day is Tuesday");
     break;

     case 3:
     printf("3rd Day is Wednesday");
     break;

     case 4:
     printf("4th Day is Thursday");
     break;

     case 5:
     printf("5th Day is Friday");
     break;

     case 6:
     printf("6th Day is Saturday");
     break;

     default:
     printf("Invaild Entry");

     return 0;
     }
}