#include <stdio.h>

void ex_03() {
	/*
	3.	�Է� ���� ������ 2�� �������� ���� ���� 10���� ũ�� OK��, �׷�ġ ������ NOK�� ����ϴ� ���α׷��� switch ���� ����Ͽ� �ۼ��Ͻÿ� 
	*/
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	switch (n / 2 > 10) {
	case 0:
		printf("NOK\n");
		break;
	case 1:
		printf("OK\n");
		break;
	}
}

void ex_04() {
	/*
	4.	���ڸ� �Է� �޾� ȭ�鿡 ����ϴ� �۾��� �ݺ��ϴ� ���α׷��� �ۼ��Ͻÿ�.( ��, �Է� ���� ���ڰ� ��q�� �̸� �ݺ� ����).
	*/
	printf("���ڸ� �Է��Ͻÿ�\n");
	while (_getche()!='q') {
		printf("\n");
	}
}

void ex_05() {
	/*
	5.	�Է� ���� ������ �������� ���� �� 1�� ��Ÿ���� Ƚ���� ����Ͻÿ�.(��, ������� ������ ������ ��� ����)
	*/
	int n;
	int temp;
	int count = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &n);
	while (n!=0) {
		temp = n >> 1;
		if (n - temp * 2 == 1) {
			count++;
		}
		n = n >> 1;
	}
	printf("%d", count);
}

void ex_06() {
	/*
	6.	�Է� ���� ������ 2������ ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	*/
	int n;
	int count = 0;
	int c[100];
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	while (1) {
		if (n == 1) {
			c[count] = 1;
			break;
		}
		else if(n % 2 == 1){
			c[count] = 1;
		}
		else {
			c[count] = 0;
		}
		n /= 2;
		count++;
	}

	while (count >= 0) {
		printf("%d", c[count]);
		count--;
	}
}

void ex_07() {
	/*
	7.	�Է� ���� ���ĺ� ���ں��� ��Z�� �Ǵ� ��z�� ���� �� �࿡ 5 ���� ���(3�� ������ ���)�ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	*/
	char c;
	int count = 1;
	printf("���ĺ� �Է� : ");
	scanf_s("%c", &c);

	if (c>='a'&&c <= 'z') {
		while (c <= 'z') {
			count % 5 == 0 ? printf("\n") : printf("%c", c);
			count++;
			c++;
		}
	}
	else if(c>='A'&&c<='Z'){
		while (c <= 'Z') {
			count % 5 == 0 ? printf("\n") : printf("%c", c);
			count++;
			c++;
		}
	}
}

void ex_08() {
	/*
	8.	1���� n������ �� �߿��� 10000�� ���� �ʴ� ���� ū �հ� �� ���� n�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. do/while, for ������ ����� ��� ��� �ۼ�. 
	*/
	int n = 1;
	int num = 2;
	do {
		n += num;
		num++;
	} while (n < 10000);
	printf("%d", num - 2);
}

void ex_08_for() {
	int num = 2;
	for (int n = 1; n < 10000; num++) {
		n += num;
	}
	printf("%d", num - 2);
}

void main(void) {
	//ex_03();
	//ex_04();
	//ex_05();
	//ex_06();
	//ex_07();
	//ex_08();
	//ex_08_for();
}