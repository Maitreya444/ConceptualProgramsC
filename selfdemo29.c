//Q29.Create an object of Salary of Mait and Saksh 
#include<stdio.h>
#include<stdlib.h>
struct Salary 
{
     int salary;
     int expenditure;
};
int main()
{
     struct Salary friend1;
     struct Salary friend2;
     struct Salary *ptr = NULL;

     ptr = &friend1;
     printf("Enter your first Salary\n");
     scanf("%d", &ptr -> salary);
     printf("Enter your expenditure\n");
     scanf("%d", &ptr -> expenditure);

     printf("Displaying information of Mait :\n");
     printf("salary %d\n", ptr -> salary);
     printf("expenditure %d\n", ptr -> expenditure);

     ptr = &friend2;
     printf("Enter your first Salary\n");
     scanf("%d", &ptr -> salary);
     printf("Enter your Expenditure\n");
     scanf("%d", &ptr -> expenditure);

     printf("Displaying information of Saksh :\n");
     printf("Salary %d\n", ptr -> salary);
     printf("Expenditure %d\n", ptr -> expenditure);

     return 0;
}