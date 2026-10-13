#include<stdio.h>
int main()
{
	int marks;
	printf("\n Enter the marks obtained by the student:");
	scanf("%d",&marks);
	printf("\n The marks obtained by the student is:%d",marks);
	
	if(marks>=40 && marks<=100)
	printf("\n STUDENT HAS PASSED");
	else 
	printf("\n STUDENT FAILS");
	
	return 0;
}
