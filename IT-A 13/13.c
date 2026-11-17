#include <stdio.h>

int main()
{
	int n,i;
	long long t1 = 0 , t2 = 1 , nextTerm;
	
	printf("ENTER THE NUMBER OF TERMS(n):");
	if(scanf("%d",&n)!=1 || n<=0) {
		printf("INVALID INPUT....PLEASE ENTER A POSITIVE INTEGER GREATER THAN 0.\n");
		return 1;
	}
	
	printf("THE FIRST %d TERMS OF THE FIBONACCI SEQUENCE ARE:\n",n);
	for(i=1;i<=n;i++){
		if(i==1){
			printf("%lld",t1);
		}
		else if(i==2){
			printf("%lld",t2);
		}
		else{
			nextTerm=t1+t2;
			printf("%lld",nextTerm);
			t1=t2;
			t2=nextTerm;
		}
	}
	return 0;
}
