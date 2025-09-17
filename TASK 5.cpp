#include<stdio.h>
int main()
{
	//THREE SCOOP PRICE IS $5.0000000
	char sprincles;
	float total;
	printf("enter total:");
	scanf("%f",&total);
	printf("Do you want sprincles(Y/N)?");
	scanf(" %c",&sprincles);
	if(sprincles=='y'||sprincles=='Y')
	{
		total=total+0.75;
		printf("$%.2f",total);
	}
	return 0;
}
