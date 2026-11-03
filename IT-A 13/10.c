#include<stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x)*(x))
#define DEBUG //comment this before running code to see the output
#ifdef DEBUG
#define LOG(x)printf("DEBUG: %s\n" , x);
	   
#else
#define log(x)
#endif

int main()
{
	float radius = 5.0;
	float area = PI * SQUARE(radius);
	LOG("Calculating Area Of Circle");
	printf("Area Of Circle: %.2f\n" , area);
	return 0;
}
