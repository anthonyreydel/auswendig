#include <stdio.h>

int main(void){
	float salary = 0.0f, hours = 0.0f;
	printf("How much do you earn weekly (in dollars)?\n");
	scanf("%f", &salary);
	printf("How many hours do you work weekly?\n");
	scanf("%f", &hours);
	printf("Your average hourly pay rate is %d dollars and %d cents.\n", (int)(salary/hours), (int)(salary*100/hours-(int)(salary/hours)*100));
	return 0;
}
