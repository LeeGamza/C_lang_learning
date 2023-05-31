
#include <stdio.h>

// 배열은 같은 데이터타입의 원소를 연속적으로 지니고 있는 것을 뜻한다.
// 배열은 인덱스(index)라는 것을 지니는데, 이 인덱스를 통해서 배열 원소에 접근할 수 있다.
// 배열의 이름은 &arr[0]와 똑같은 의미를 지닌다. 즉 시작주소는 배열의 이름이다.

// 포인터는 이러한 주소를 받을 수 있다. 배열이지만 시작원소만 알면 이후에 애들은 알아서 접근할 수 있기 때문에
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptrArr = arr;			//배열의 이름은 시작 주소를 가리키는 또 다른 식별자이기 때문에 주소 연산자가 필요하지 않다.

	printf("arr[0]의 주소 %p / arr의 주소 %p\n", &arr[0], arr);
	printf("arr의 값 : %d\n", *arr);

	for (int i = 0; i < 5; ++i)
	{
		printf("주소 값 [%p], arr[%d] : %d *(a+%d) : %d\n",
			(arr + i), i, arr[i], i, *(arr + i));
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("주소 값 [%p], ptrArr[%d] : %d *(ptrArr+%d) : %d\n",
			(ptrArr + i), i, ptrArr[i], i, (*ptrArr + i));
	}
	return 0;
}