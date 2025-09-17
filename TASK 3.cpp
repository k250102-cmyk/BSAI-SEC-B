#include<stdio.h>
int main()
{
	int scoops;
	float total;
	printf("Enter how many scoops do you want?");
	scanf("%d",&scoops);
	if(scoops==1)
	{
		total=2.00;
		printf("$%.2f",total);
	}
	if(scoops==2){
		total=3.50;
		printf("$%.2f",total);
	}
	if(scoops==3)
	{
		total=4.50;
		printf("$%.2f",total);
}
	
return 0;
}
