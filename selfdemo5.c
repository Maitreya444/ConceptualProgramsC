/*Q5. Maitreya recieved his first salary of $120,000. Now Maitreya Spends near about $30,000 for his loved ones, 
he then investes $40,000 in mutualfunds and spends $10,000 for his date to surprise _____. Find total money spent and
total money he still has in order to get bankcrupt? */

#include <stdio.h>
int totalkharcha(int a, int b, int c, int d)
{
     int Result = 0;
     Result = (a=b+c+d);
     return Result;
}
int paisebaki(int v, int x, int y, int z)
{
     int Ans = 0;
     Ans = (v-x-y-z);
     return Ans ;
}
int main()
{
     int No1 = 120000;
     int No2 = 30000;
     int No3 = 40000;
     int No4 = 10000;
     int money = 0;
     int remaining = 0;

     money = totalkharcha(No1, No2, No3, No4);
     remaining = paisebaki(No1, No2, No3, No4);

     printf("%d", money);
     printf("\n %d", remaining);

     return 0;
}