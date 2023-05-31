#include <stdio.h>



//2차원 배열
/*
* x와 y가 생긴 개념으로 매트릭스(Matrix)로 이해하면 된다.
* 
* 가로/세로가 존재하는 맵이나 도트 등에서 다방면에서 활용된다.
* 
*/
int main(void)
{
	int TwoArr1[3][3];
	int TwoArr2[2][2] = {
		{1,2},
		{3,4}
	};
	int TwoArr3[][4] = {				// 행은 생략할 수 있다. 하지만 열은 생략할 수 없다.
		{10, 20, 30, 40},
		{50, 60, 70, 80}
	};
	int TwoArr4[][4] = {
		3,6,9,12,15,18,21,24
	};
	int TwoArr5[][4] = {		// 나머지는 0으로 초기화 된다.
		{1},
		{2,3}
	};

	// 2차원 배열은 이중 반복문들과 한 몸이나 다름이 없다.
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("[%d][%d] = [%d]", i, j, TwoArr3[i][j]);
		}
		printf("\n");
	}

	//rows와 cols, 가로와 세로 크기 구하기
	// int(4byte) * 8 = 32byte(TwoArr3의 전체 크기)
	// 2 * 4 행렬이니깐 column의 크기는 얼마가 나와야돼?
	//cols의 값은 4가 나와야된다. 그치
	int cols = sizeof(TwoArr3[0]) / sizeof(int);
	int rows = sizeof(TwoArr3) / sizeof(TwoArr3[0]);

	// 배열의 길이 즉 Length가 항상 셋트이다.
	// 모르면왜? 반복문을 돌릴 수가 없자나 물론 뭐 끝이 널이아닐 때까지 라는 경우의 수가 존재하지만,
	// 확실하게 하기 위해서는 배열의 길이를 구해서 사용되는 것이 일반적이다.
	
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("%d ", TwoArr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}