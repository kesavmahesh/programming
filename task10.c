#include<stdio.h>
main()
{
	int n=12345;
	while(n>0)
	{
		printf("%d\n",n);
		printf("      \n");
		n=n/10;
	}
}
