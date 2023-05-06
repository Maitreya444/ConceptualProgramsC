/*Q25. Access Name and Age of the User using structure and pointers*/
#include<stdio.h>
struct Person
{
     int age;
     int weight;
};
int main()
{
     struct Person obj1;
     struct Person obj2;
     struct Person *ptr = NULL;

     ptr = &obj1;

     printf("Enter the age of : \n");
     scanf("%d", &ptr -> age);
     printf("Enter the weight of : \n");
     scanf("%d", &ptr -> weight);

     printf("Displaying the info");
     printf("age %d\n", ptr -> age);
     printf("wright %d\n", ptr -> weight);

     ptr = &obj2;

     printf("Enter the age of : \n");
     scanf("%d", &ptr -> age);
     printf("Enter the weight of : \n");
     scanf("%d", &ptr -> weight);

     printf("Displaying the info");
     printf("age %d\n", ptr -> age);
     printf("wright %d\n", ptr -> weight);

     return 0;
}