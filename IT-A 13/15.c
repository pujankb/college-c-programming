#include<stdio.h>

int main()
{
	int num;
	printf("ENTER NUMBERS (ENTER 13 TO STOP)");
	while(1)
	{
		scanf("%d",&num);
		if(num==13)
		{
			printf("NUMBER 13 ENTERED....TERMINAL KILLED!!!\n");
			break;
		}
		printf("YOU ENTERED:%d\n",num);
	}
	return 0;
}
