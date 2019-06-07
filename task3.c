#include<stdio.h>
void main()
{
	int m1,m2,m3;
	int avg,sum;
	printf("\nenter your math marks: ");
	scanf("%d",&m1);
	printf("\nenter your science marks: ");
	scanf	("%d",&m2);
	printf("\nenter your history marks: ");
	scanf("%d",&m3);
	sum=m1+m1+m3;
	avg=(m1+m2+m3)/3;
	printf("\nthe average of your marks is %d",avg);
	printf("\nthe sum of your marks is %d",sum);
}
