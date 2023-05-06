#include<stdio.h>
float area(float l,float b)
{
	return (l*b);
}

int main()
{
	
	float l,b,a;
	
	printf("enter length of rectangle: ");
	scanf("%f",&l);
	
	
	printf("enter breadth of rectangle: ");
	scanf("%f",&b);

	a=area(l,b);
	printf("AOR: %f\n",a);
	return 0;
}
//FROM CHROME