//Q28. Calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int Arr [5];

     int size =0;
     int *ptr = NULL;

     printf("Enter the size of array \n");
     scanf("%d", &size);
     printf("The size of int is :%d \n", sizeof size);
     printf("The size of ptr is :%d \n", sizeof ptr);

     ptr =(int*)calloc(sizeof(int), size);

     free(ptr);
     return 0;
}