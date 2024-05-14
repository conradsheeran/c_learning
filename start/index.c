#include <stdio.h>
#define pi 3.1415926
float square(int);

int main(void) {
	int r;

	r = 10;
	printf("%f", square(r));

	return 0;

}

static float square(int r) {
	float area;

	area = pi * r * r;

	return area;
}