#include <stdio.h>

int main()
{
	int input;
	printf("\n ENTER A NUMBER TO CHECK WHETHER POSITIVE NEGATIVE OR ZERO:");
	scanf("%d",&input);
	
	if(input>0)
	{
		printf("\n NUMBER IS POSITIVE");
	
	}
	else if(input<0)
	{
		printf("\n NUMBER IS NEGATIVE");
	}
	else
	{
		printf("\n NUMBER IS ZERO");
	}
	
	return 0;
}
