#include<stdio.h>
main()
{
	int far,cel;
	char choice;
	printf("enter the operation you want to perform:\n 1.celsuis to farenheit \n2.farenheit to celsius \n3. end");
	scanf("%s",&choice);
	switch(choice)
	{
		case'1':
			printf("enter the temperature in degree celsius: ");
			scanf("%d",&cel);
			far = (cel* 9 / 5) + 32;
			printf("\n the temperature in degree farenheit is %d ",far);
			break;	
		case'2' :
			printf("enter the temperature in degree farenheit: ");
			scanf("%d",&far);
			cel = 5 * (far - 32) / 9;
			printf("\n the temperature in degree celsius is %d ",cel);
			break;
		case'3' :
			printf("end");
			break;
		default :
			printf("please enter a valid choice");
		 	break;	
		
		
	}
}
