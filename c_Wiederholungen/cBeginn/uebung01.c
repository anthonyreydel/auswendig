#include <stdio.h>

int main(void){
	float meter = 0.0f;
	float inch = 0.0f;
	printf("Please give a distance in inchs:\n");
	scanf("%f", &inch);
	meter = inch/36;
	printf("The distance is %.2f meters.\n", meter);
	return 0;
}
