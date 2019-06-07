#include<stdio.h>
main()
{
	int n,fac=1,i;
	printf("\nenter a number you want to find the factorial for: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fac=fac*i;
	}
	printf("\nthe factorial of the given number is %d",fac);
}
