#include<stdio.h>
void main()
{
	char string[100];
	int l,begin,middle,end;
	int i,j;
	int sum=0;
	printf("\nenter a string: ");
	gets(string);
	l=strlen(string);
	 end = l-1;
  middle = l/2;
 for (begin = 0; begin < middle; begin++)
  {
    if (string[begin] != string[end])
    {
      printf("Not a palindrome.\n");
      break;
    }
    end--;
  }
  if (begin == middle)
    printf("given string is a Palindrome.\n");
 
  return 0;
}

