#include<stdio.h>
int main()
{
	int day;
	float total;
	printf("enter total:");
	scanf("%f",&total);
	printf("Enter a day[1-7]:");
	scanf("%d",&day);
	if(day==6||day==7)
	{
		total=total-(total*0.1);
		printf("$%.2f",total);
	}
	else
	{
		printf("no discount");
	}
	return 0;
}
	
