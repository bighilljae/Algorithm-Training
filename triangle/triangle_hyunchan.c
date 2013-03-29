#include<stdio.h>

int main(void)
{
	float base, hight,area;

	printf("input base hight\n");
	scanf("%f %f",&base,&hight);

	area=(base*hight)/2;

	printf("%.2lf\n",area);


	return 0;
}

