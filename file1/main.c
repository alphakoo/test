#include <stdio.h>

int main(void) {

	int arry[5];

	arry[0] = 27;
	arry[1] = 10;

	int arry_b = {2,4,6,8};

	int i;

	for(i=0; i<4; i++){

		printf("%d", arry_b[i]);
	}
	
  	return 0;
}