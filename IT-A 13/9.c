#include<stdio.h>

int main(){
	float income , tax , netIncome;
	printf("ENTER YOUR ANNUAL INCOME: $");
	scanf("%f" , &income);
	if(income <= 10000) {
		tax = 0;
	}
	else if(income <= 50000){
		tax = (income - 10000) * 0.10;
	}
	else {
		tax = 4000 + (income - 50000) * 0.20;
	}
	netIncome = income - tax;
	printf("GROSS INCOME: $%.2f\n" , income);
	printf("TAX OWED: $%.2f\n" , tax);
	printf("NET INCOME: $%.2f\n" , netIncome);
	
	return 0;
}
