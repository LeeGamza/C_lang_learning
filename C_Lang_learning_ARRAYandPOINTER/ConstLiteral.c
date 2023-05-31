#include <stdio.h>

//상수와 리터럴 상수에 대한 이해 //
/*
* 변수가 뭐였을까? 변하는 수
* 상수는 변수와 상반되는 개념으로 :변하지 않는 수"를 의미한다.
* 상수의 키워드로는 'const'를 사용한다.
* 
* 리터럴 상수 : 리터럴의 뜻이 뭘까? 
* a : 데이터(값) 그 자체를 의미한다. ex}3.141592, 준재의 키 178
* 10 20 30 40 이런 것도 다 리터널이라고 부른다.
* 
* // l-value, r-value : left value 값이 들어가는 벨류 / right-value 피연산자라고 생각하면 된다. 대부분 리터널이 들어간다.
*/
int main(void)
{
	//리터널
	float PI = 3.141592;		// r-value인 3.141592는 리터널이라고 부른다.
	
	// const 키워드를 사용하자
	const float PI_2 = 3.14f;		// const 키워드를 사용한 상수의 경우 선언과 동시에 초기화를 해주어야한다.
	//즉 const float PI_2;와 같은 형태로는 선언할 수 없다.
	PI = 2.0f;		//상수가 아닌 변수는 당연히 값을 변경이 가능하다.
	//PI_2 = 3.1f;	//상수는 값 변경을 할 수 없다. 할 경우 컴파일 에러가 발생한다.
	float radius = 5.0f;

	// r * r * PI = 원의 넓이
	float circle;
	circle = radius * radius * PI_2;

	printf("반지름 [%.1f]의 넓이는 [%.2f]입니다.\n", radius, circle);
	return 0;
}