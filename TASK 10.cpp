#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char flavor;
	char toppings;
	int scoops;
	char cone_type1[30]="Waffle cone";
	char cone_type2[30]="Regular cone";
	char cone_type[30];
	
	int day;
	int age;
	
	char payment_method[30];
	char payment_method1[30]="card";
	char payment_method2[30]="cash";
	float total;
	printf("Enter flavor:");
	scanf("%c",&flavor);
	printf("how many scoops do you want?");
	scanf("%d",&scoops);
	printf("enter cone type:");
	scanf("%s",cone_type);
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter day[1-7]:");
	scanf("%d",&day);
	//getch();
	printf("Do you want sprincles[Y/N]:");
	scanf(" %c",&toppings);
	printf("Enter payment method:");
	scanf("%s",payment_method);
	if(flavor=='s'||flavor=='S')	
	{
		printf("\nyou choose strawberry");
	}
	else if(flavor=='c'||flavor=='C')
	{
		printf("\nyou choose chocolate");
	}
	else if(flavor=='v'||flavor=='V')
		{
			printf("you choose vanilla");
		}
		
	
	if(scoops==1)
	{
		total=2.00;
		
	}
	else if(scoops==2)
	{
		total==3.50;
		
	}
	else if(scoops==3){
		total=4.50;
		
	}
	if(strcmp(cone_type,cone_type1)==0)
		{
			total=total+1.00;
				
		}
	else if(strcmp(cone_type,cone_type2)==0)
		{
			total=total+0.50;
				
		}
	if(toppings=='y'||toppings=='Y')
		{
			total=total+0.75;
			
		}
	if(day==6||day==7)
		{
			total=total-(total*0.1);
				
	}
	if(age<12)
		{
			total=total-1;
			
		}
	if(scoops==3&&strcmp(cone_type,cone_type1)==0)
		{
			printf("\nYou get free topping.");
		}
	if(strcmp(payment_method,payment_method1)==0)
		{
			total=total+0.50;
			printf("$%.2f\n",total);
		}
	return 0;
}
