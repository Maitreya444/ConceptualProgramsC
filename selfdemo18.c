/*Q18. A code to swap thr numbers*/
#include <stdio.h>
int main()
{
     int first = 0;
     int second = 0;
     int temporary = 0;

     printf("Enter First Number :");
     scanf("%d", &first);
     printf("Enter Second Number :");
     scanf("%d", &second);

     temporary = first ;      //Sakshi giving gift to Nitika 
     second = first ;         //Mait giving gift to Saksh
     second = temporary ;     //Nitika giving back that gift to me.

     printf("After swapping your First Number is %d\n:", first);
     printf("After swapping your Second Number is %d\n:", second);

     return 0;
}