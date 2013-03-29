#include<stdio.h>

int main (void)
{
	int x,y,z;

	printf("input\n");
	scanf("%d %d",&y,&x);

	z=y*(x-1)+1;

	printf("ouput\n");
	printf("%d\n",z);

	/*
	   (인용수/논문수)	<= 주요요소<(인용수/논문수)+1
	   논문수 * (주요요소 -1) < 인용수 <= 논문수 * 주요요소
	   논문수 * (주요요소 -1) + 1 <= 인용수 <= 논문수 * 주요요소
	 */


return 0;
}

