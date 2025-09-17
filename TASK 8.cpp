#include<stdio.h>
#include<string.h>
int main()
{
	char cone_type1[30]="Waffle cone";
	char cone_type2[30]="Regular cone";
	char cone_type[30];
	int scoops;
	printf("How many scoops do you want:");
	scanf("%d",&scoops);
	printf("enter cone type:");
	scanf("%s",cone_type);
	if(scoops==3&&(strcmp(cone_type,cone_type1)==0))
	{
		printf("you get free topping");
}
else
{
	printf("no topping");
}
}
