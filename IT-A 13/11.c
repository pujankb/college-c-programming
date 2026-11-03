#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
	double num = 25.0;
	printf("USING MATH.H:\n");
	printf("SQUARE ROOT OF %.2f is %.2f\n" , num , sqrt(num));
	printf("POWER: 2^3=%.0f\n" , pow(2,3));
	printf("sine of 0 radians = %.2f\n\n" , sin(0));
	
	char ch1 = 'A', ch2 = '7', ch3 = ' ';
	printf("Using ctype.h:\n");
	printf("Is '%c' an alphabet? %s\n", ch1, isalpha(ch1) ? "Yes" : "No");
	printf("Is '%c' a digit? %s\n", ch2, isdigit(ch2) ? "Yes" : "No");
	printf("Is '%c' a whitespace? %s\n\n", ch3, isspace(ch3) ? "Yes" : "No");
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[20];
	printf("Using string.h:\n");
 	printf("Length of str1 = %lu\n", strlen(str1));
	strcpy(str3, str1); // Copy str1 into str3
 	strcat(str3, str2); // Concatenate str2 to str3
	printf("After copying and concatenating: %s\n", str3);
	printf("Comparing str1 and str2: %d\n", strcmp(str1, str2));
	return 0;
}
