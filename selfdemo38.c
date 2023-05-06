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
     int Addition = 0;
     int Substraction = 0;
     int Multiplication = 0;
     int Division = 0;
     int All = 0;
     int No1 = 0;
     int No2 = 0;
     int result = 0;
     int choice = 0;
     int switchcal = 0;
     printf("HELLO MY BOSSLADY :)<3 \n");
     printf(" 1 = Addition \n");
     printf("2 = Substraction \n");
     printf("3 = Multiplication\n");
     printf("4 = Division \n");
     printf("5 = All \n");
     printf("Enter your choice\n");
     scanf("%d", &choice);
     printf("Operation performed will be %d\n", choice);

     if ((choice = 1))
     {
          switchcal = 1;
     }
     else if ((choice = 2))
     {
          switchcal = 2;
     }
     else if ((choice = 3))
     {
          switchcal = 3;
     }
     else if ((choice = 4))
     {
          switchcal = 4;
     }
     else if ((choice = 5))
     {
          switchcal = 5;
     }

     printf("Enter No1 \n");
     scanf("%d", &No1);
     printf("Enter No2 \n");
     scanf("%d", &No2);

     switch (switchcal)
     {
          case 1:
          Addition = Plus(No1, No2 );
          printf("Addition is %d\n", Addition);
          break ;

          case 2:
          Substraction = Minus(No1, No2);
          printf("Substraction is %d\n", Substraction);
          break;

          case 3:
          Multiplication = intoo(No1, No2);
          printf("Multiplication is %d\n", Multiplication);
          break;

          case 4:
          Division = Bye(No1, No2);
          printf("Division is %d\n", Division);
          break;

          case 5:
          All = OPS(No1, No2);
          printf("All operations are %d\n", All);
          break;

          default:
          printf("Invaild Entry");
     } 
     return 0;
}