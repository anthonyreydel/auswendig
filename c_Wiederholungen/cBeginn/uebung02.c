#include <stdio.h>

int main(void){
	float lengthFoot = 0.0f, widthInch = 0.0f, lengthMeter = 0.0f, widthMeter = 0.0f;
	printf("Please give the length of the room in foot:\n");
	scanf("%f", &lengthFoot);
	printf("Please give the width of the room in inch:\n");
	scanf("%f", &widthInch);
	lengthMeter = lengthFoot/3;
	widthMeter = widthInch/36;
	printf("The area of the room is %.2f square meters.\n", lengthMeter*widthMeter);
	return 0;
}
