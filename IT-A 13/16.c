#include<stdio.h>

int factorial(int n);
int factorial(int n)
{
	int fact=1,i;
	for(i=1; i<=n; i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n,result;
	printf("ENTER A POSITIVE INTEGER: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("SINCE THE NUMBER IS NEGATIVE FACTORIAL IS NOT DEFINED.\n");
	}
	else 
	{
		result=factorial(n);
		printf("FACTORIAL OF %d IS %d\n",n , result);
	}
	return 0;
}
