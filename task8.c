#include<stdio.h>
main()
{
	int n,a,i,m;
	printf("\nenter a number whose multiplication table you want to display: ");
	scanf("%d",&n);
	for(i=0;i<=20;i++)
	{
		a=i;
		m=n*i;
		printf("\n %d * %d = %d",n,i,m);
	}
}
