//Q31. I got my first salary and I'm buying a gift for my bosslady and NK. Store the data of gift using pointers.
#include<stdio.h>
#include<stdlib.h>
struct Saksh
{
     int price;
     int gifts;
};
int main()
{
     struct Saksh obj1;
     struct Saksh obj2;
     struct Saksh *ptr = NULL;

     *ptr = obj1;
     printf("Enter the price of the gift \n");
     scanf("%d", &ptr->price);
     printf("Enter the no of Gifts for my Bosslady \n");
     scanf("%d", &ptr->gifts);

     return 0;
}