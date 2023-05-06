/*Q4. Maitreya recieved a paycheque of $99000. He buys a Samasung S23+ of $72000 for his long
distance girlfriend, And also buys a Saree for her that costs $5000. Find his total Expenditure
and total money remaining?*/

#include <stdio.h>
int totalkharcha(int a, int b, int c)
{
     int Result = 0;
     Result =(a=b+c);
     return Result ;
}
int paisashillak(int x, int y, int z)
{
     int Ans= 0;
     Ans =(x-y-z);
     return Ans;
}
int main()
{
     int no1= 99000;
     int no2= 72000;
     int no3= 5000;
     int money = 0;
     int remain = 0;

     money= totalkharcha(no1, no2, no3); 
     remain= paisashillak(no1, no2, no3);

     printf(" %d ", money);
     printf(" \n %d ", remain);

     return 0;
}