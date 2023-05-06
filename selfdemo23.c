//Q23. Write a program to perform aritmatic operations
#include<stdio.h>
int Addition(int a, int b)
{
     int Result = 0;
     Result = (a+b);
     return Result;
}
int Substraction(int x, int y)
{
     int Result = 0;
     Result = (x-y);
     return Result;
}
int Multiplication(int l, int m)
{
     int Result = 0;
     Result = (l*m);
     return Result;
}
int Division(int g, int h)
{
     int Result = 0;
     Result = (g/h);
     return Result;
}
int main()
{
     int no1 = 0;
     int no2 = 0;
     int Add = 0;
     int Sub = 0;
     int Mul = 0;
     int Div = 0;

     printf("Enter no 1 \n:");
     scanf("%d", &no1);
     printf("Enter no 2 \n:");
     scanf("%d", &no2);
     
     Add = Addition(no1 , no2);
     Sub = Substraction(no1 , no2);
     Mul = Multiplication(no1 , no2);
     Div = Division(no1 , no2);

     printf("Addition is %d\n", Add);
     printf("Substraction is %d\n", Sub);
     printf("Multiplication is %d\n", Mul);
     printf("Divison is %d\n", Div);

     return 0; 

}