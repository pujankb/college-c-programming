#include <stdio.h>

int main() {
	char colour;
	printf("ENTER TRAFFIC LIGHT COLOUR (R/Y/G):");
	scanf("%c" , &colour);
	
	switch (colour) {
		case 'R':
		case 'r':printf("Stop\n");break;
		case 'Y':
		case 'y':printf("Ready\n");break;
		case 'G':
		case 'g':printf("Go\n");break;
		default:printf("Invalid Colour\n");
	}
	return 0;
}
