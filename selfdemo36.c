//Q36. Create a object and store data of your crush
#include<stdio.h>
struct Crush 
{    
     char name;
     int phno;
     int age;
     int height;
};
int main()
{
     struct Crush Sakshi;
     struct Crush NK;
     struct Crush *ptr =NULL;

     Sakshi.name = "Saksh";
     Sakshi.phno = 7420016299;
     Sakshi.age = 19;
     Sakshi.height = 158;

     NK.name = "Nitika";
     NK.phno = 8978874687;
     NK.age = 21;
     NK.height = 163;

     ptr = &Sakshi;
     printf("Name is :%c\n", ptr -> name);
     printf("phno is :%d\n", ptr ->phno);
     printf("Age is :%d\n", ptr -> age);
     printf("Height is :%d\n", ptr -> height);

     ptr = &NK;
     printf("Name is :%c\n", ptr -> name);
     printf("phno is :%d\n", ptr ->phno);
     printf("Age is :%d\n", ptr -> age);
     printf("Height is :%d\n", ptr -> height);     

     return 0;
}