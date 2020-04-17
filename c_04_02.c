#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void f11() {
	int i, j;

	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%4d    * %4d    = %4d\n", i, j, i * j);
		}
		printf("\n");
	}
}

void f12() {
	int in;

	while(1) {
		printf("3자리수 입력 : ");
		scanf_s("%d", &in);
		if (in < 100 || in > 999) {
			break;
		}
		for (int i = 1; i <= in; i++) {
			if (i % 3 == 0) {
				(i % 10) ? printf("%4d%c", i, ' ') : printf("%4d%c", i, '\n');
			}
		}
		printf("\n\n");
	}
}

void f13() {
	char c;

	printf("k이하의 알파벳입력(q는 종료, k이상은 다시 입력)");
	while (1) {
		c = _getche();
		if (c == 'q' || c == 'Q') {
			printf("\nq입력으로 종료");
			break;
		}
		if ((c >= 'k' && c <= 'z') || (c >= 'K' && c <= 'Z')) {
			printf("\nk이하의 알파벳입력(q는 종료, k이상은 다시 입력)");
			continue;
		}
	}
}

void f14() {
	char c;
	int sum = 0;
	while (1) {
		printf("\n문자입력(알파벳과 숫자 이외의 문자 입력 시 종료)");
		c = _getche();
		if (c >= '0' && c <= '9') {
			printf("\n숫자 입니다. 지금까지 숫자들의 합 = %d", sum += (c - '0'));
		}
		else if (c >= 'A' && c <= 'Z') {
			printf("\n대문자입니다.");
		}
		else if (c >= 'a' && c <= 'z') {
			printf("\n소문자입니다.");
		}
		else {
			printf("\n알파벳과 숫자 이외의 문자를 입력하여 종료합니다.");
			break;
		}
	}
}

void f16() {
	int n;
	int num = 20;
	char c;
	char result = 'a';

	printf("반복횟수입력: ");
	n = _getche() - '0';

	for (int i = 0; i < n; i++) {
		printf("\n문자입력 : ");
		c = _getche();
		if (c == 'M' || c == 'm') {
			result = c;
			num = 0;
		}
		else if (c >= 'A' && c <= 'Z') {
			if (abs('M' - c) < num) {
				num = abs('M' - c);
				result = c;
			}
		}
		else if (c >= 'a' && c <= 'z') {
			if (abs('m' - c) < num) {
				num = abs('m' - c);
				result = c;
			}
		}
		else {
			printf(" => 알파벳이 아닙니다. 다시 입력하시오");
			i--;
		}
	}
	printf("\nM과 가장 가까운 문자는 = %c",result);
}

void main() {
	/*
		문제는 귀찮아서 스킵
	*/
}
