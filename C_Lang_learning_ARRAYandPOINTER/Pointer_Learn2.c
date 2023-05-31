
// Pointer_Learn2.c

#include <stdio.h>

// 간접 참조 연산자(*) 포인터와 똑같은 연산자를 쓴다.
// 선언을 할 때 int* ptr - 포인터 연산자
// *ptr = r-value - 간접 참조 연산자

// 참조 연산자는 포인터의 이름이나 주소 옆에 사용한다.
// 이는 포인터가 가리키는 주소에 저장된 값을 변환한다.

int main(void)
{
	int value = 20;
	
	printf("%d\n", value);
	int* ptr = &value;

	*ptr = 30;			// ptr(포인터 변수)에 들어 있는 주소로 가서, 그 변수의 값을 가져온다고 이해하면 된다.

	printf("%d\n", value);

	// &value = 0x00010
	// ptr이 들고 있는 값 = 0x00010이다.
	// 그러면 *ptr = 0x00010인 value의 주소로 들어가서 해당 value가 가지고 있는 값의 접근하는 것이다.


	return 0;
}