#include <stdio.h>

int main(){
	float principal, rate, time,interest;
	
	printf("Enter the principal rate:");
	scanf("%f",& principal);
	
	printf("Enter the rate of the interest:");
	scanf("%f", &rate);
	
	printf("Enter the time:");
	scanf("%f", &time);
	
	interest= ( principal*rate*time) / 100;
	
	
	
	
}
