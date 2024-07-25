#include<stdio.h>
main()
{
	char letter='a';
	do
	{
		printf("%c\t",letter);
		letter++;letter++;letter++;letter++;
	}while(letter<='z');
}