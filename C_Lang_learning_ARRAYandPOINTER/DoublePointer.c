#include <stdio.h>

// 이중포인터 (double Pointer)
/*
* 주로 2차원배열을 사용하기위해서 사용을 한다.
* 포인터는 변수의 주소를 저장하기 위해서 사용하는 포인터 변수이고,
* 이중포인터는 그 포인터의 주소를 저장해서 사용하는데 이 사용방식은 옳지않다.
* 
* 대부분 2차원 배열에서 이중포인터 또는 포인터배열을 사용하면서 원소에 대해 접근한다.
* 또는 재귀함수를 쓰면서 노드를 추가할 때 이중포인터를 사용해서 포인터변수의 주소를 접근하기 위해 사용
*/
int main(void)
{
	int value = 10;
	int* ptr = &value;
	int** dptr = &ptr;

	printf("**dptr : %d, *dptr : %p, dptr : %p\n", **dptr, *dptr, dptr);

	printf("ptr : %p,value :  %p\n", &ptr, &value);
	return 0;
}