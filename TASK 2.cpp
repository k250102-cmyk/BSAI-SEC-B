#include<stdio.h>
int main()
{
	int scoops;
	printf("How many scoops do you want?");
	scanf("%d",&scoops);
	if(scoops>1)
	{
		printf("Please check for our multiple scoop offers!");
	}
	else
	{
	printf("price for one scoop is $2.00");
	}
}
