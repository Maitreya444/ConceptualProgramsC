//Test all basic concepts of pointers in C 
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int Saksh = 543;
     float Nitika = 0;
     char A = 0;
     double D = 0;
     int *Sptr = &Saksh;
     float *Nptr = &Nitika;
     char *Cptr = &A;
     double *Dptr = &D;

     printf("Address of Saksh is : %d\n", &Saksh);
     printf("Size of Saksh is : %d\n" ,sizeof (Saksh));
     printf("Size of ptr Saksh is : %d\n", sizeof(*Sptr));
     printf("Address of ptr Saksh is : %d\n", &Sptr);
     printf("Value of ptr Saksh is : %d\n", *Sptr);

     printf("\n");

     printf("Address of Nitika is : %d\n", &Nitika);
     printf("Size of Nitika is : %d\n" ,sizeof (Nitika));
     printf("Size of ptr Nitika is :%d\n", sizeof(*Nptr));
     printf("Address of ptr Nitika is :%d\n", &Nptr);
     printf("Value of ptr Nitika is :%d\n", *Nptr);

     printf("\n");

     printf("Address of A is : %d\n", &A);
     printf("Size of A is : %d\n" ,sizeof (A));
     printf("Size ptr Char is :%d\n", sizeof(A));
     printf("Address of ptr Char is :%d\n", &Cptr);
     printf("value of ptr Char A is :%d\n", *Cptr);

     printf("\n");

     printf("Address of D is : %d\n", &D);
     printf("Size of D is : %d\n" ,sizeof (D));
     printf("Size of ptr D is :%d\n", sizeof(*Dptr));
     printf("Address of ptr D is :%d\n", &Dptr);
     printf("Value of ptr D is :%d\n", *Dptr);
     return 0;
}