/*Q12. Create a student Report card*/
#include <stdio.h>
int main()
{
     int marks = 0;
     int grade = 0;

     printf("Enter your Marks  :\n");
     scanf("%d", &marks);

     if (marks >=90)
     {
          grade = 1;
     }
     else if(marks >=80)
     {
          grade = 2;
     }
     else if(marks >=60)
     {
          grade = 3;
     }
     else  if(marks >=50)
     {
          grade = 4;
     }
     printf("Student Grade :\n");
     

     switch(grade)
     {
          case 1:
          printf("Your grade is A...\n");
          break;

          case 2:
          printf("Your grade is B...\n");
          break;

          case 3:
          printf("Your grade is C...\n");
          break;

          case 4:
          printf("Abhyyas kr...\n");
          break;

          default :
          printf("Wrong enter...\n");
     }
     return 0;
}