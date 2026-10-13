#include <stdio.h>

int main()
{
	int TotalWeight;
	int NumberOfItems;
	float WeightInKg;
	float AverageWeight;
	
	printf("\n ENTER THE TOTAL WEIGHT:");
	scanf("%d",&TotalWeight);
	printf("\n ENTER THE TOTAL NUMBER OF INDIVIDIAL ITEMS INSIDE THE CRATE:");
	scanf("%d",&NumberOfItems);
	WeightInKg=(float)TotalWeight/1000;
	printf("\n THE TOTAL WEIGHT IN KG IS:%f",WeightInKg);
	
	AverageWeight=WeightInKg/NumberOfItems;
	printf("\n THE AVERAGE WEIGHT OF EACH ITEM IS:%.3f kg",AverageWeight);
	
	return 0;
	
}
