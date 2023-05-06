//Calloc function for my crush
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int Arr[10];
     int Nitika = 0;
     int * ptr = NULL;

     printf("Enter the size of Array :\n");
     scanf("%d", &Nitika);

     ptr = (int *) malloc (sizeof(int)*Nitika);
     printf("Malloc is :%d\n", malloc);

     ptr = (int *)calloc(sizeof(int),Nitika);
     printf("calloc is :%d\n", calloc);

     ptr = (int *)realloc (ptr ,sizeof(int)*3);
     printf("Realloc is :%d", realloc);

     free(ptr);

     return 0;
}