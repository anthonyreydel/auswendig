#include <stdio.h>

#define STD 3.5f
#define PRM 5.5f

int main(void){
	int amountSTD = 0, amountPRM = 0;
	printf("How many copies of the standard version do you need?\n");
	scanf("%d", &amountSTD);
	printf("How many copies of the premium version do you need?\n");
	scanf("%d", &amountPRM);
	printf("It will be in total %.2f €.\n", STD*amountSTD+PRM*amountPRM);
	return 0;
}
