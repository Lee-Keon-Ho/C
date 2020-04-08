#include <stdio.h>

void ex_03(void) {
	/*
	3.	표준입력으로 두 정수를 입력 받아 큰 수를 작은 수로 나눈 몫과 나머지를 각각 출력하는 프로그램을 작성하시오. (조건 연산자 사용)
	*/

	int a, b;
	int max, min;

	printf("정수 2개를 입력하시오\n");
	scanf_s("%d %d", &a, &b);

	max = a > b ? a : b;
	min = a < b ? a : b;

	printf("몫 : %d\n나머지 : %d\n", max / min, max % min);
}

void ex_04(void) {
	/*
	4.	세 수를 입력 받아 가장 큰 수를 구하는 프로그램을 조건 연산자를 이용하여 작성하시오. 
	*/

	int a, b, c, max;

	printf("3개의 수를 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);

	max = a > b ? (a > c ? a : c) : (b > c ? b : c);

	printf("가장 큰 수는 %d\n", max);
}

void ex_05(void) {
	/*
	5.	입력 받은 정수를 2로 나눈 몫이 10보다 크면 “OK” 그렇지 않으면 “NOK”를 출력하는 프로그램을 작성하시오.(단 나누기 연산자 사용 금지)
	*/

	int num;

	printf("정수를 입력하시오\n");
	scanf_s("%d", &num);

	(num >> 1) ? printf("OK") : printf("NOK");

 }

void ex_06(void) {
	/*
	6.	_getche()를 사용하여 문자를 입력 받아 알파벳이 아니면 ‘N’, 알파벳이면 ‘Y’를 출력하는 프로그램을 작성하시오. (조건 연산자 사용)
	*/

	char eng;

	printf("문자를 입력하시오\n");
	eng = _getche();
	printf("\n");

	(eng >= 'A' && eng <= 'z') ? printf("Y") : printf("N");
}

void ex_07(void) {
	/*
	7.	_getche()를 사용하여 0~9까지의 숫자 2개를 입력 받아 두 숫자의 합을 출력하시오. (단, 입력 받은 문자가 숫자가 아닌 경우에는 0으로 처리하시오. (조건 연산자 사용)
	*/

	int a, b;

	printf("0~9까지의 숫자 2개를 입력하시오\n");
	a = _getche();
	printf("\n");
	b = _getche();
	
	a = (a >= '0' && a <= '9') ? a-48 : 0;
	b = (b >= '0' && b <= '9') ? b-48 : 0;

	printf("두 수의 합은 %d 입니다.\n", a + b);
}

void ex_08(void) {
	/*
	8.	입력 받은 정수의 2배, 4배, 8배 수를 출력하는 프로그램을 작성하시오.
	*/

	int num;

	printf("정수를 입력하시오\n");
	scanf_s("%d", &num);

	printf("입력한 정수의 2배 : %d \n입력한 정수의 4배 : %d\n입력한 정수의 8배 : %d\n", num * 2, num * 4, num * 8);
}

void main(void) {
	ex_03();
	ex_04();
	ex_05();
	ex_06();
	ex_07();
	ex_08();
}
