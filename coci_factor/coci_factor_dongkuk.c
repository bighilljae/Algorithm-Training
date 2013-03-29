/*
	coci_factor.c
	[문제요약] 과학 논문 평가의 주요 요소는 다른 논문에 얼마나 많은 인용이 일어나는가가 주요 요소이다.

	만약 38 개의 논문에 894 번의 인용이 일어났다면
	평가 점수는 894/38 = 23.53
	올림하면 24 이다.(항상 올림)
	y 개의 논문에 x 번의 인용이 일어난 경우 주요 요소 z 를 구할 수 있다. 문제는 y , z 가 주어질 때 최소 x 를 구하는 것이다.

	Created by Dongkuk Kim on Mar 29, 2013.
	Copyright (c) 2013 Dongkuk Kim. All rights reserved.
*/

#include <stdio.h>

int main(void)
{
	int min_quote;		//인용
	int factor;			//주요 요소	
	int article;		//논문


	printf("논문 수 : ");
	scanf("%d", &article);

	printf("주요요소 : ");
	scanf("%d", &factor);

	/*
		(인용수/논문수) <= 주요 요소 < (인용수/논문수)+1
		논문수 * (주요요소 -1) < 인용수 <= 논문수 * 주요요소
		논문수 * (주요요소 -1) + 1 <= 인용수 <= 논문수 * 주요요소
	*/

	// 최소 인용수 = 논문수 * (주요요소 -1) + 1
	min_quote = article * (factor-1) + 1;

	printf("인용 수 = %d\n", min_quote);	

	return 0;
}