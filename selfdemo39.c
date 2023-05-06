/*Q39. Make a structure to store marks using pointers of you and your BOSSLADY. */
#include<stdio.h>
struct marks
{
     int rollno;
     int hindi;
     int science;
     int maths;
};
int main()
{
     struct marks Mait;
     struct marks Saksh;
     struct marks *ptr=NULL;

     ptr = &Mait;
     printf("Enter your Rollno \n");
     scanf("%d", &ptr -> rollno);
     printf("Enter your marks in Hindi \n");
     scanf("%d", &ptr -> hindi);
     printf("Enter your marks in science \n");
     scanf("%d", &ptr -> science);
     printf("Enter your marks in Maths \n");
     scanf("%d", &ptr -> maths);

     printf("Displaying info about MAIT \n");
     printf("Roll no is : %d\n", ptr -> rollno );
     printf("Marks in hindi is : %d\n", ptr -> hindi);
     printf("Marks in science is : %d\n", ptr -> science);
     printf("Marks in Science is : %d\n", ptr -> maths);

     ptr = &Saksh;
     printf("Enter your Rollno \n");
     scanf("%d", &ptr -> rollno);
     printf("Enter your marks in Hindi \n");
     scanf("%d", &ptr -> hindi);
     printf("Enter your marks in science \n");
     scanf("%d", &ptr -> science);
     printf("Enter your marks in Maths \n");
     scanf("%d", &ptr -> maths);

     printf("Displaying info about SAKSH \n");
     printf("Roll no is : %d\n", ptr -> rollno );
     printf("Marks in hindi is : %d\n", ptr -> hindi);
     printf("Marks in science is : %d\n", ptr -> science);
     printf("Marks in Science is : %d\n", ptr -> maths);

     return 0;
}