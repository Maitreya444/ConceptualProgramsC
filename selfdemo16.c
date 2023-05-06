/*Q16. So I just got my 1st salary into my account (₹1___,___) and like I dreamt I buy a surprise
gift for my BOSSLADY. Find How much money you still have into your account after total expenditure. 
Also find out of 4 things which 2 things you buy.*/

#include <stdio.h>
int kharcha(int a, int b, int c)
{
     int Result = 0;
     Result = (b+c);
     return Result;
}
int paisabaki(int x, int y, int z)
{
     int Result = 0;
     Result = (x-z);
     return Result;
}
int main()
{
     int salary = 0;
     int surprise = 0;
     int totalexp = 0;
     int moneyleft = 0;

     printf("Enter your Salary : \n");
     scanf("%d", &salary);
     printf("Enter the amount of your Surpise : \n");
     scanf("\n %d", &surprise);
     printf("Enter total expenditure : \n");
     scanf("\n %d", &totalexp);
     
     totalexp = kharcha(salary, surprise, totalexp);
     moneyleft = paisabaki(salary, surprise, totalexp);

     printf("Money spent \n %d", totalexp);
     printf("Your Money left is \n %d", moneyleft);

     return 0;
}
