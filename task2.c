#include<stdio.h>
void main()
{
	float cel=0.0;
	float far=0.0;
	
	printf("\nenter the temperature in degree celsius:");
	scanf("%f",&cel);
	 far=((cel*9)/5)+32;
	 printf("\ntemperrature in farenheit is %f",far);
	
	
}
