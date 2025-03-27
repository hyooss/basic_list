#include <stdio.h>

int main(void) {
	// 1. 배열을 사용한 리스트의 초기화
	int data[5] = { 10,20 };
	int length = 2;
	int pos; //위치 (포지션)
	int index;
	int delitem; //삭제값


	// 3. 리스트의 마지막에 아이템을 삽입
	data[length] = 30;
	length++; // 길이를 1증가
	//10, 20, 30

	// 4.리스트의 맨 앞에 아이템 삽입
	// 현재 항목들을 하나씩 뒤로 이동
	// 뒤에서부터 이동
	for (index = length-1; index >=0 ; index--) {
		data[index + 1] = data[index];
	}
	data[0] = 40; //맨 앞에 삽입
	length++;
	// 40,10,20,30

	//5. 리스트 중간에 아이템 삽입
	//3번째 자리에 삽입
	//3번째 자리(index=2)부터 아이템을 뒤로 이동
	pos = 3;
	for (index = length - 1; index >= pos-1; index--) {
		data[index + 1] = data[index];
	}
	data[pos-1] = 50;
	length++;
	//40,10,50,20,30

	//6.리스트의 맨뒤 아이템 삭제
	//=리스트 길이 하나 줄여줌 (length 하나 감소
	delitem = data[length-1]; //삭제 아이템
	length--; //개수 감소
	printf("Delete Item : %d\n", delitem);

	//7.리스트의 맨 앞의 아이템 삭제
	//2번째 아이템부터 하나씩 앞으로 이동
	delitem = data[0];
	for (index = 0; index <= length-1; index++) {
		data[index] = data[index + 1];
	}
	length--;
	printf("Delete Item : %d\n", delitem);

	//8.리스트의 중간 아이템 삭제
	//2번째(index=1) 아이템을 삭제
	pos = 2;
	delitem = data[pos - 1];
	for (index = pos-1; index <= length - 1; index++) {
		data[index] = data[index + 1];
	}
	length--;
	printf("Delete Item : %d\n", delitem);

	//2. 리스트의 탐색 및 출력
	printf("Linear List = [");
	for (index = 0; index < length; index++) {
		printf("%d", data[index]);
		// 인덱스가 마지막이 아니라면 , 붙여라
		if (index != length - 1) {
			printf(", ");
		}
	}
	printf("]\n");
	return 0;
}