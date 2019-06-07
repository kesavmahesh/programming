#include<stdio.h>
void main()
{
	int number=0,sum=0,num,ans=0,n;
	printf("enter a 3 digit number: ");
	scanf("%d",&number);
	num=number;
	while(num>0)
	{
	n=num%10;
	ans=ans+(n*n*n);
	num=num/10;	
	}
	if(ans==number)
	{
		printf("the given number is an amstrong number");
	}
	else
	{
	printf("the given number is not an amstrong number");	
	}
	
}
