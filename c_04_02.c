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
		printf("3�ڸ��� �Է� : ");
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

	printf("k������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�)");
	while (1) {
		c = _getche();
		if (c == 'q' || c == 'Q') {
			printf("\nq�Է����� ����");
			break;
		}
		if ((c >= 'k' && c <= 'z') || (c >= 'K' && c <= 'Z')) {
			printf("\nk������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�)");
			continue;
		}
	}
}

void f14() {
	char c;
	int sum = 0;
	while (1) {
		printf("\n�����Է�(���ĺ��� ���� �̿��� ���� �Է� �� ����)");
		c = _getche();
		if (c >= '0' && c <= '9') {
			printf("\n���� �Դϴ�. ���ݱ��� ���ڵ��� �� = %d", sum += (c - '0'));
		}
		else if (c >= 'A' && c <= 'Z') {
			printf("\n�빮���Դϴ�.");
		}
		else if (c >= 'a' && c <= 'z') {
			printf("\n�ҹ����Դϴ�.");
		}
		else {
			printf("\n���ĺ��� ���� �̿��� ���ڸ� �Է��Ͽ� �����մϴ�.");
			break;
		}
	}
}

void f16() {
	int n;
	int num = 20;
	char c;
	char result = 'a';

	printf("�ݺ�Ƚ���Է�: ");
	n = _getche() - '0';

	for (int i = 0; i < n; i++) {
		printf("\n�����Է� : ");
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
			printf(" => ���ĺ��� �ƴմϴ�. �ٽ� �Է��Ͻÿ�");
			i--;
		}
	}
	printf("\nM�� ���� ����� ���ڴ� = %c",result);
}

void main() {
	f16();
}