#include <stdio.h>

int main(void)
{
	float area, base, height;

	scanf("%f,%f", &base, &height);

	area=base*height/2;

	printf("삼각형의 넓이: %.2f\n", area);

	return 0;
}