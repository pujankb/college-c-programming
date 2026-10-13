#include <stdio.h>

int main()
{
	char alphabet;
	printf("\n ENTER AN ALPHABET:");
	scanf("%c",&alphabet);
	
	if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
	{
		printf("\n ALPHABET IS A VOWEL");
	}
	else
	printf("\n ALPHABET IS A CONSONENT");
	
	return 0;
}
