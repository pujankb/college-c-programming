#include <stdio.h>

int main()
{
	int radius;
	float area;
	const float PI=3.14;
	
	printf("\n ENTER A RADIUS:");
	scanf("%d",&radius);
	printf("\n RADIUS GIVEN BY THE USER IS:%d",radius);
	
	area=PI*(float)radius*(float)radius;
	
	printf("\n THE AREA IS:%.2f",area);
	
	return 0;
}
