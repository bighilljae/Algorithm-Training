/*
	triangle.c
	삼각형 넓이를 구하는 문제이다.		넓이 = 밑변 * 높이 / 2

	입력
	두 자연수가 입력으로 주어진다. 두 수는 1000 이하의 자연수이고 ,차례대로 밑변과 높이이다.

	출력
	넓이를 소수 이하 2 자리 ( 세 번째 자리에서 반올림 ) 까지 출력한다.

	Created by Dongkuk Kim on Mar 29, 2013.
	Copyright (c) 2013 Dongkuk Kim. All rights reserved.
*/

#include <stdio.h>

int main(void)
{
	float area;
	int height;
	int baseline;

	// Getting base line...
	printf("삼각형의 밑변 길이 : ");
	scanf("%d", &baseline);

	// Getting height...
	printf("삼각형의 높이 : ");
	scanf("%d", &height);

	// Calculating area...
	area = (float)height * baseline / 2;

	// 세자리 수에서 반올림한 결과를 보여준다.
	printf("삼각형의 넓이 = %.2f\n", area);


	return 0;
}
