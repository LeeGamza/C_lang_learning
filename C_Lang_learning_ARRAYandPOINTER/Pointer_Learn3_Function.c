
// Pointer_Learn3_Function.c

#include <stdio.h>
void SwapPtr(int* val1, int* val2);
void SwapNormal(int val1, int val2);

// 포인터의 존재 의의
// Call-By-Value, Call-By,Reference에 대해서
/*
* Call-By-Value
* 기본적으로 C언어에서 제공해주고 지원해주는 방식이다.
* 함수를 호출해서 값을 인자로 넘겨줄 때 값을 복사해서 전달하는 방식이다.
* 인자로 전달되는 변수를 함수의 매게변수에 그 값을 복사하는 형태라고 생각하면된다.
* 
* 즉, 복사를 한 값은 전달한 인자와 매게변수는 별개의 변수가 되어 영향을 미치지 않는다.
* 따라서 원본 값이 변경되지 않는 형태이다.
* 함수 안에서의 지역변수 val1, val2는 인자로 전달받은 ivalue1과 ivalue2와는 별개의 변수이기 때문에
* 해당 함수를 탈출하는 즉시 val1과 val2는 소멸하기에 원본 값들이 변경되지 않는 것이다.
*/

/*
* Call-By-Reference
* 함수를 호출할 때 값을 인자로 넘기지 않고 주소값을 전달하는 방식이다.
* C언어에서는 이 주소 값 마저도 사실은 넘겨주는게 아니라 복사하는 것이기때문에 정확히 콜바이레퍼런스라고 하기에는 애매하다.
* 그래서 C언어에서만 이를 보고 Call-By-Address라고 하는 경우도 있다.
* 주소 값을 복사한거다. 그래서 공식적인 Call-By-Reference는 Java나 C#에서만 제공이 되고 있다.
*/
int main(void)
{
	int ivalue1 = 100;
	int ivalue2 = 200;

	SwapNormal(ivalue1, ivalue2);

	printf("ivalue1 [%d] / ivalue2 [%d]", ivalue1, ivalue2);

	// 매개변수가 포인터이기 때문에 인자로 주소 값을 전달해줘야한다.
	SwapPtr(ivalue1, ivalue2);

	printf("ivalue1 [%d] / ivalue2 [%d]", ivalue1, ivalue2);
	return 0;
}

void SwapPtr(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void SwapNormal(int val1, int val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}
