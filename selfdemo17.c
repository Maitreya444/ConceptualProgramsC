/*Q17. Check whether an integer entered by the user is a prime number or not.
A prime number is a positive integer that is divisible only by 1 and itself. 
For example: 2, 3, 5, 7, 11, 13, 17.*/

#include <stdio.h>
int main ()
{
     int iCnt = 0;
     int no = 0;
     int flag = 0;

     printf("Enter a Number :");
     scanf("%d", &no);

     for(iCnt = 1; iCnt<=no; iCnt++)
     if(no %iCnt==0)
     {
          flag ++;
     }
     if(flag == 2)
     {
          printf("The number is Prime Number");
     }
     else
     {
          printf("The number is not a Prime Number");
     }
     return 0;
}