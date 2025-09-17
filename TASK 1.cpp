#include<stdio.h>
int main()
// TO SELECT THE FLAVOR OF CONE
{
	char flavor;
	printf("Which flavor do you want?");
	scanf("%c",&flavor);
	if(flavor=='c'||flavor=='C')
	{
		printf("you choose chocolate flavor");
	}
	else if(flavor=='v'||flavor=='V')
	{
		printf("you choose vanilla flavor");
	}
	else if(flavor=='s'||flavor=='S')
	{
		printf("you choose strawberry flavor");
	}
	else
	{
		printf("invalid choice");
	}
}
