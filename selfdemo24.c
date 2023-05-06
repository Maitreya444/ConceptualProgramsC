/*Q24. Write a program using structure and Pointers to store adress of the Student*/
#include<stdio.h>
struct Student
{
     char name;
     int rollno;
     int class;
     char div;
};
int main()
{
     struct Student obj1;
     struct Student obj2;
     struct Student *ptr= NULL;

     obj1.name = "Mait";
     obj1.rollno = 20;
     obj1.class = 10;
     obj1.div = 'A';

     obj2.name = "Saksh";
     obj2.rollno = 21;
     obj2.class = 10;
     obj2.div = 'B';

     ptr = &obj1;

     printf("Name is %c\n", ptr->name);
     printf("Roll no is %d\n", ptr->rollno);
     printf("Class no is %d\n", ptr->class);
     printf("Div is %c\n", ptr->div);

     ptr = &obj2;

     printf("Name is %c\n", ptr->name);
     printf("Roll no is %d\n", ptr->rollno);
     printf("Class no is %d\n", ptr->class);
     printf("Div is %c\n", ptr->div);

     return 0;
}