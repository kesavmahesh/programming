#include<stdio.h>
void main()
{
	char name[100];
	int age;
	char pno[40];
	printf("\nenter your name: ");
	gets(name);
	printf("\nenter your age: ");
	scanf("%d",&age);
	printf("\nenter your phone number: ");
	scanf("%s",&pno);
	printf("\nname is : %s",name);
	printf("\nyour age is: %d",age);
	printf("\nyour phone number is: %s",pno);
}
