#include <stdio.h>

int main(void) {
	// 1. �迭�� ����� ����Ʈ�� �ʱ�ȭ
	int data[5] = { 10,20 };
	int length = 2;
	int pos; //��ġ (������)
	int index;
	int delitem; //������


	// 3. ����Ʈ�� �������� �������� ����
	data[length] = 30;
	length++; // ���̸� 1����
	//10, 20, 30

	// 4.����Ʈ�� �� �տ� ������ ����
	// ���� �׸���� �ϳ��� �ڷ� �̵�
	// �ڿ������� �̵�
	for (index = length-1; index >=0 ; index--) {
		data[index + 1] = data[index];
	}
	data[0] = 40; //�� �տ� ����
	length++;
	// 40,10,20,30

	//5. ����Ʈ �߰��� ������ ����
	//3��° �ڸ��� ����
	//3��° �ڸ�(index=2)���� �������� �ڷ� �̵�
	pos = 3;
	for (index = length - 1; index >= pos-1; index--) {
		data[index + 1] = data[index];
	}
	data[pos-1] = 50;
	length++;
	//40,10,50,20,30

	//6.����Ʈ�� �ǵ� ������ ����
	//=����Ʈ ���� �ϳ� �ٿ��� (length �ϳ� ����
	delitem = data[length-1]; //���� ������
	length--; //���� ����
	printf("Delete Item : %d\n", delitem);

	//7.����Ʈ�� �� ���� ������ ����
	//2��° �����ۺ��� �ϳ��� ������ �̵�
	delitem = data[0];
	for (index = 0; index <= length-1; index++) {
		data[index] = data[index + 1];
	}
	length--;
	printf("Delete Item : %d\n", delitem);

	//8.����Ʈ�� �߰� ������ ����
	//2��°(index=1) �������� ����
	pos = 2;
	delitem = data[pos - 1];
	for (index = pos-1; index <= length - 1; index++) {
		data[index] = data[index + 1];
	}
	length--;
	printf("Delete Item : %d\n", delitem);

	//2. ����Ʈ�� Ž�� �� ���
	printf("Linear List = [");
	for (index = 0; index < length; index++) {
		printf("%d", data[index]);
		// �ε����� �������� �ƴ϶�� , �ٿ���
		if (index != length - 1) {
			printf(", ");
		}
	}
	printf("]\n");
	return 0;
}