#include<stdio.h>
void main()
{
	int num=0,sum=0,rev=0;
	printf("\nenetr a number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rev=num%10;
		sum=sum*10+rev;
		num=num/10;
		
	}
	printf("\nThe reversed nnumber is %d",sum);
}
