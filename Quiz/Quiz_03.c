#include <stdio.h>
#include <conio.h>
/*
	1부터 1천 까지의 입력 받은 수 사이의 3의 배수를 출력하시오.
	출력은 숫자 폭 4자리, 한 행에 10개씩 출력합니다(3항연산자(?)사용).
	숫자를 입력 받고 배수를 출력하는 작업은 계속 반복하되,
	입력 받은 수가 1보다 작고 1천 보다 크면 반복을 종료합니다.
*/
void quiz_03() {
	int n;
	
	do {
		printf("1 ~ 1000 숫자를 입력 : ");
		scanf_s("%d", &n);
		if (n < 1 || n > 1000) {
			break;
		}
		for (int i = 1; i <= n; i++) {
			if (i % 3 == 0) {
				(i % 10) ? printf("%4d%c", i, ' ') : printf("%4d%c", i, '\n');
			}
		}
		printf("\n");
	} while (1);

}

void main() {
	quiz_03();
}
