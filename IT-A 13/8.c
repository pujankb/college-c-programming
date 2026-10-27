#include<stdio.h>

int main(){
	int steps[7];
	int lazyDays = 0 , peakStreak = 0;
	int maxStreak = 0;
	int i;
	
	for(i = 0; i < 7; i++) {
		printf("ENTER STEPS FOR DAY %d: ",i + 1);
		scanf("%d" , &steps[i]);
	}
	
	printf("\n ========== WEEKLY HEALTH REPORT ==========\n");
	for(i = 0; i < 7; i++) {
		printf("DAY %d: %d Steps :-" , i + 1, steps[i]);
		
		if(steps[i] < 3000){
			printf("LAZY DAY\n");
			lazyDays++;
			peakStreak = 0;
		}
		else if(steps[i] <= 10000) {
			printf("ACTIVE DAY\n");
			peakStreak = 0;
		}
		else {
			printf("PEAK PERFORMER DAY\n");
			peakStreak++;
			
			if(peakStreak > maxStreak) {
				maxStreak = peakStreak;
			}
		}
	}


if (lazyDays >= 3){
	printf("\n WARNING:- SEDENTARY LIFESTYLE\n");
}

if(maxStreak >= 3){
	printf("GREAT STREAK\n");
}
return 0;
}
