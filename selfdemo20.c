/*Q20. write a C program to find no of days in a month using switch case*/
#include <stdio.h>
int main()
{
     //1,3,5,7,8,10,12 :- 31days
     //2,4,6,9,11 :- <31 days
     #include <stdio.h>
     int month = 0;

     printf("Enter no of month (1-12) ");
     scanf("%d", &month);

     switch(month)
     {
          case 1:
          printf("January has 31 days");
          break;

          case 2:
          printf("Febuvary has 29 days");
          break;

          case 3:
          printf("March has 31 days");
          break;

          case 4:
          printf("April has 30 days");
          break;

          case 5:
          printf("May has 31 days");
          break;

          case 6:
          printf("June has 30 days");
          break;

          case 7:
          printf("July has 31 days");
          break;

          case 8:
          printf("August has 31 days");
          break;

          case 9:
          printf("September has 30 days");
          break;

          case 10:
          printf("October has 31 days");
          break;

          case 11:
          printf("November has 30 days");
          break;

          case 12:
          printf("December has 31 days");
          break;

          default:
          printf("Invaild Entry");

          return 0;
     }

}