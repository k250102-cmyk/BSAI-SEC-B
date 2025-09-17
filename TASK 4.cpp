#include<stdio.h>
#include<string.h>
int main()
{
	char cone_type[30];
	char cone_type1[30]="Regular cone";
	char cone_type2[30]="Waffle cone";
	//memeset (cone_type1,0);
	//memset(cone_type2,0);
	strcpy (cone_type1,"Regularcone");
	strcpy (cone_type2,"Wafflecone");
	float total;
	printf("enter total:");
	scanf("%f", &total);
	printf("enter cone type:");
	scanf(" %c",cone_type);
	if(strcmp(cone_type,cone_type1)==0)
	{
		total=total+0.50;
		printf(" $%.2f",total);
	}
	else if(strcmp(cone_type,cone_type2)==0)
	{
		total=total+1.00;
		printf(" $%.2f",total);
	}
	else
	{
	printf("invalid");
	}	

return 0;
}
