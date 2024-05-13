#include <stdio.h>
#define pi 3.1415926
float square(void);

int main(void) {
	int r;

	r = 10;
	printf("%d", square(r));
	return 0;

}

float square(int r) {
	float area;

	area = pi * r * r;
	return area;
}