#include<stdio.h>
#include<string.h>
int main()
{
float total;
char paymentmethod1[20]="cash";
char paymentmethod2[20]="card";
char paymentmethod[20];
printf("total:");
scanf("%f",&total);
printf("Enter payment method:");
scanf("%s",paymentmethod);
if(strcmp(paymentmethod,paymentmethod2)==0)
{
	total=total+0.50;
	printf("total amount=$%.2f\n",total);
	printf("your order placed sucessfully!");
}
	else
	{
		printf("order has been placed");
	}
	return 0;
}
