#include<stdio.h>
void main()
{
	char str1[50];
	char str2[50];
	printf("enter your first name: ");
	gets(str1);
	printf("enter your last name: ");
	gets(str2);
	strcat(str1,str2);
	printf("\nyour full name is %s",str1);
}
