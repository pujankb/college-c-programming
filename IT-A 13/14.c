#include<stdio.h>

int main()
{
	int i=1,j,n;
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&n);
	
	while(i<=n){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
