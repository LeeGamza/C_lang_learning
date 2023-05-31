
// TypeCasting.c

#include <stdio.h>

// 형 변환 (Type Casting)
/*
* 실제 프로그래밍에 대한 연산을 할 때는 다른 데이터 타입끼리 연산을 하는일이 잦다.
* ex)
* int value1 = 10;
* float value2 = 3.3f
* 
* int sum = value1 + value2;		//결과 값에 대한 손실 경고가 발생한다.
* 
* 자료형에는 확장과 축소가 존재하고,
* 암시적 형 변환과 명시적 형 변환이 존재한다.
*/

int main(void)
{
	/*Ex1*/
	// 이게 실제 프로그래밍에서 제일 많이 발생하는 연산 상황이다.
	// float과 integer를 연산 했을 때 float이 더 큰 범위를 지니고 있기 때문에 자동적으로 자료형의 확장이 발생한다.
	// 이를 보고 자료형의 확장이라 하며 이 것은 암시적 또는 묵시적 형 변환이라고 한다.

	int ivalue = 10;
	float fvalue = 3.8f;

	printf("%f\n", ivalue - fvalue);
	printf("%f\n", ivalue * fvalue);
	printf("%f\n", ivalue / fvalue);

	/*Ex2*/
	// 자료형의 축소, 확장과 반대되는 개념
	// 값에 대한 손실이 발생하는데, 일부러 그 손실을 할 필요가 있을 때가 존재한다.
	// 그래서 꼭 알아둬야하는 개념이다.

	float fval1 = 10.3;
	float fval2 = 5.3f;

	int sum = fval1 / fval2;

	printf("%d\n", sum);

	/*강제 형 변환(명시적)*/
	
	int ivalue1 = 10;
	int ivalue2 = 3;
	
	float div = ivalue1 / ivalue2;

	printf("%f\n", div);
	// 두 피연산자가 같은 데이터 타입일 때 해당 데이터타입으로 변환되어서 컴퓨터는 계산 결과값을 넘겨준다.
	// 10 / 3 = 3.3333333 이 맞지만, 컴퓨터는 소수점 이하자리를 버리고 10 / 3 = 3으로 인식한다.
	// 그래서 사용하는 것이 TypeCasting(타입 캐스팅)이다.

	// (데이터타입)변수 - 형 변환
	div = (float)ivalue1 / ivalue2;
	printf("%f\n", div);
	return 0;
}