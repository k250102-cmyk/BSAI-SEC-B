#include<stdio.h>
int main()
{
	int age;
	float total;
	scanf("%f",&total);
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<12)
	{
		total=total-1;
		printf("$%.2f",total);
	}
	else
	{
		printf("no discount");
	}
	return 0;
}
	
