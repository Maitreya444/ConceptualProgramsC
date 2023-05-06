//Write a code using functions to return the sqares
#include<stdio.h>
int square(int x, int y)
{
     int Result = 0;
     Result = (x *x);
     return Result;
}
int main()
{
     int no1 = 0;
     int Ans = 0;

     printf("Enter the no :");
     scanf("%d", &no1);

     Ans = square(no1, Ans);

     printf("The Square is %d", Ans);

     return 0;
}