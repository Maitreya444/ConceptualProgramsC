//Calculator 
#include<stdio.h>
int Plus (int a, int b)
{
     int Result = 0;
     Result = (a+b);
     return Result;
}
int Minus (int a, int b)
{
     int Result = 0;
     Result = (b-a);
     return Result;
}
int intoo(int a, int b)
{
     int Result = 0;
     Result = (a*b);
     return Result;
}
int Bye (int a, int b)
{
     int Result = 0;
     Result = (b/a);
     return Result;
}
int OPS (int a, int b)
{
     int Result = 0;
     Result = (a+b);
     Result = (b-a);
     Result = (a*b);
     Result = (b/a);

     return Result;

}
int main()
{    
     int No1 = 0;
     int No2 = 0;
     int Addition = 0;
     int Substraction = 0;
     int Multiplication = 0;
     int Division = 0;
     int All = 0;
     int result = 0;
     int choice = 0;

     printf(" 1 = Addition \n 2 = Substraction \n 3 = Multiplication \n 4 = Division \n 5 = ALL \n");
     printf("Enter your choice\n");
     scanf("%d", &choice);
     printf("Operation performed will be %d\n", choice);

     switch (choice)
     {
          case 1:
          result = Plus (No1 , No2);
          printf("Addition is : %d\n", No1, No2, result);
          break;

          case 2:
          result = Minus (No1, No2);
          printf("Subtraction is :%d\n", No1, No2, result);
          break;

          case 3: 
          result = intoo (No1, No2);
          printf("Multiplication is :%d\n", No1, No2, result);
          break;

          case 4:
          result = Bye (No1, No2);
          printf("Division is : %d\n", No1, No2, result);
          break;

          case 5 :
          result = OPS (No1, No2);
          printf("All operations : %d\n", No1, No2, result);
          break;

          default :
          printf("Invalid entry");
     }

     printf("Enter No1 \n");
     scanf("%d", &No1);
     printf("Enter No2 \n");
     scanf("%d", &No2);
     
     Addition = Plus(No1, No2 );
     Substraction = Minus(No1, No2);
     Multiplication = intoo(No1, No2);
     Division = Bye(No1, No2);
     All = OPS(No1, No2);

     printf("Addition is %d\n", Addition);
     printf("Substraction is %d\n", Substraction);
     printf("Multiplication is %d\n", Multiplication);
     printf("Division is %d\n", Division);
     return 0;
}