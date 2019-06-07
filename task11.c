#include<stdio.h>
struct book
{
	char title[100];
	char author[100];
	char genre[100];
	

}b;
void display(char s1[],char s2[],char s3[])
{
	printf("\nTITLE :- %s",s1);
	printf("\nAUTHOR :- %s",s2);
	printf("\nGENERE :- %s",s3);
	
}


main()
{
	struct book b;
	printf("enter the title of the book: ");
	gets(b.title);
	printf("\nenter the author of the book: ");
	gets(b.author);
	printf("\nenter the genre of the book: ");
	gets(b.genre);
	display(b.title,b.author,b.genre);

	
}

