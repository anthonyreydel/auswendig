#include <stdio.h>

int main(void){
	enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} today = Monday, tomorrow = today+1;
	printf("%d\n", tomorrow);
}
