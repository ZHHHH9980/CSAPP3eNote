#include <stdio.h>

float sum_elements(float a[], unsigned length) {
	int i;
	float result = 0;

	for (i = 0; i <= length-1; i++)
		result += a[i];
	return result;
}

int main(void) {
	float a[3] = {1.0, 2.0, 3.0};
	unsigned length = 0;

	float result;
	result = sum_elements(a,length);
	printf("%f", result);
}
