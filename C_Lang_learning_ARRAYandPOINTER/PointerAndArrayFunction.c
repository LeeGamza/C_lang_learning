#include <stdio.h>

void ElementsAdded(int* arrPtr, int len);
void ArrayElementsPrint(int* arrPtr, int len);
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	//20과 4를 나누어서 5로 만들어야 된다.
	int len = sizeof(arr) / sizeof(int);

	
	ArrayElementsPrint(arr, len);

	ElementsAdded(arr, len);

	ArrayElementsPrint(arr, len);
	return 0;
}

// 배열의 원소에 대해 10씩 더해주는 함수

void ElementsAdded(int* arrPtr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		arrPtr[i] += 10 * (i + 1);
	}
}

void ArrayElementsPrint(int* arrPtr, int len)
{
	for (int i = 0; i < len; ++i)
		printf("%d ", arrPtr[i]);		//포인터는 배열처럼 인덱스를 사용해서도 접근이 가능하다.
	printf("\n");
}
