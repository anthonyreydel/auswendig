#include <stdio.h> 
#define DEF 8

int main(void){
	float plank_length = 10.0f;
	float piece_count = 0.0f;
	float piece_length = 0.0f;
	
	printf("Give me a number:\n");
	scanf("%f", &piece_count);

	piece_length = plank_length/piece_count;
	printf("A plank %-8.2f feet long can be cut in to %5.0f pieces %6.2f feet long.\nAnd the DEF is %.3f\n", plank_length, piece_count, piece_length, (float)DEF);
	
	return 0;
}
