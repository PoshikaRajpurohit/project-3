#include<stdio.h>
main()
{
	int count=0 , n;
	printf("Enter the value of N=");
	scanf("%d",&n);
	while(n !=0)
	{
		n=n/10;
		count++;
	}
	printf("The no. of digit=%d",count);
}