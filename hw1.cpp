#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("Uppercase character");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("Lowercase character");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("Digit");
	}
	else
	{
		printf("Special character");
	}
}