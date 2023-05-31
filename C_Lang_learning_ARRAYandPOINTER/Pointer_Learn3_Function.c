
// Pointer_Learn3_Function.c

#include <stdio.h>
void SwapPtr(int* val1, int* val2);
void SwapNormal(int val1, int val2);

// �������� ���� ����
// Call-By-Value, Call-By,Reference�� ���ؼ�
/*
* Call-By-Value
* �⺻������ C���� �������ְ� �������ִ� ����̴�.
* �Լ��� ȣ���ؼ� ���� ���ڷ� �Ѱ��� �� ���� �����ؼ� �����ϴ� ����̴�.
* ���ڷ� ���޵Ǵ� ������ �Լ��� �ŰԺ����� �� ���� �����ϴ� ���¶�� �����ϸ�ȴ�.
* 
* ��, ���縦 �� ���� ������ ���ڿ� �ŰԺ����� ������ ������ �Ǿ� ������ ��ġ�� �ʴ´�.
* ���� ���� ���� ������� �ʴ� �����̴�.
* �Լ� �ȿ����� �������� val1, val2�� ���ڷ� ���޹��� ivalue1�� ivalue2�ʹ� ������ �����̱� ������
* �ش� �Լ��� Ż���ϴ� ��� val1�� val2�� �Ҹ��ϱ⿡ ���� ������ ������� �ʴ� ���̴�.
*/

/*
* Call-By-Reference
* �Լ��� ȣ���� �� ���� ���ڷ� �ѱ��� �ʰ� �ּҰ��� �����ϴ� ����̴�.
* C������ �� �ּ� �� ������ ����� �Ѱ��ִ°� �ƴ϶� �����ϴ� ���̱⶧���� ��Ȯ�� �ݹ��̷��۷������ �ϱ⿡�� �ָ��ϴ�.
* �׷��� C������ �̸� ���� Call-By-Address��� �ϴ� ��쵵 �ִ�.
* �ּ� ���� �����ѰŴ�. �׷��� �������� Call-By-Reference�� Java�� C#������ ������ �ǰ� �ִ�.
*/
int main(void)
{
	int ivalue1 = 100;
	int ivalue2 = 200;

	SwapNormal(ivalue1, ivalue2);

	printf("ivalue1 [%d] / ivalue2 [%d]", ivalue1, ivalue2);

	// �Ű������� �������̱� ������ ���ڷ� �ּ� ���� ����������Ѵ�.
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