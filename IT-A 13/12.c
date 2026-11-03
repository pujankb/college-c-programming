#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c;
	double D,root1,root2;
	double realpart,imgpart;
	
	printf("\n ENTER THE CO=EFFICIENTS (a , b and c) FOR THE QUADRATIC EQUATION");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	D=pow(b,2)-(4*a*c);
	printf("====================TRAJECTORY ANALYSIS====================");
	if(D>0){
		printf("\n SINCE D IS GREATER THAN 0 , THE ROOTS ARE REAL AND DISTINCT!!!");
		root1=-b+sqrt(D)/2*a;
		root2=-b-sqrt(D)/2*a;
		printf("\n ROOT1=%lf seconds",root1);
		printf("\n ROOT2=%lf seconds",root2);
	}
	else if(D==0){
		printf("\n SINCE D=0 , THE ROOTS ARE REAL AND EQUAL!!!");
		root1=-b/2*a;
		printf("\n ROOTS OF THE EQUATION ARE : %lf",root1);
	}
	else 
	{
		printf("\n SINCE D IS SMALLER THAN 0 , THE ROOTS OF THE EQUATION ARE COMPLEX AND IMAGINARY!!!");
		realpart=-b/2*a;
		imgpart=sqrt(-D)/2*a;
		printf("\n ROOT 1 OF THE EQUATION ARE : %.2lf + %.2lf",realpart,imgpart);
		printf("\n ROOT 2 OF THE EQUATION ARE : %.2lf - %.2lf",realpart,imgpart);
	}
	return 0;
}
