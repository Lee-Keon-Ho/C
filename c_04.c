#include <stdio.h>

void ex_03() {
	/*
	3.	입력 받은 정수를 2로 나누었을 때의 몫이 10보다 크면 OK를, 그렇치 않으면 NOK를 출력하는 프로그램을 switch 문을 사용하여 작성하시오 
	*/
	int n;
	printf("정수 입력 : ");
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
	4.	문자를 입력 받아 화면에 출력하는 작업을 반복하는 프로그램을 작성하시오.( 단, 입력 받은 문자가 ‘q’ 이면 반복 종료).
	*/
	printf("문자를 입력하시오\n");
	while (_getche()!='q') {
		printf("\n");
	}
}

void ex_05() {
	/*
	5.	입력 받은 정수를 이진수로 만들 때 1이 나타나는 횟수를 출력하시오.(단, 나누기와 나머지 연산자 사용 금지)
	*/
	int n;
	int temp;
	int count = 0;
	printf("정수 입력 : ");
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
	6.	입력 받은 정수를 2진수로 변환하여 출력하는 프로그램을 작성하시오.
	*/
	int n;
	int count = 0;
	int c[100];
	printf("정수 입력 : ");
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
	7.	입력 받은 알파벳 문자부터 ‘Z’ 또는 ‘z’ 까지 한 행에 5 개씩 출력(3항 연산자 사용)하는 프로그램을 작성하시오. 
	*/
	char c;
	int count = 1;
	printf("알파벳 입력 : ");
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
	8.	1부터 n까지의 합 중에서 10000을 넘지 않는 가장 큰 합과 그 때의 n을 구하는 프로그램을 작성하시오. do/while, for 각각을 사용한 경우 모두 작성. 
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