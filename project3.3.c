#include<stdio.h>
main()
{
	int first,last,num,sum;
	printf("Enter any number");
	scanf("%d",&num);
	last=num%10;
	first=num;
	while(first>=10)
	{
		first/=10;
	}
	sum=first+last;
	printf("The sum of the first and last digit is =%d\n ",sum);
}