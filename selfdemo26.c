//Q26. Payal gave udhari to Nitika. Udhari parat kr.
#include<stdio.h>
int paiseparatkr(int No1 , int No2)
{
     int Result =0;
     Result = (No1 + No2);
     return Result;
}
int main()
{
     int money =0;
     int add=0;
     int totaludhari =0;

     printf("Kiti paise dile \n");
     scanf("%d\n", money);
     printf("Paise parat kr oye \n :");

     totaludhari= paiseparatkr(money , add);

     
     printf("%d\n", totaludhari);

     return 0;

}