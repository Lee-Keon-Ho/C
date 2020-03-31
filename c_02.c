#include <stdio.h>
#define meter 3.305785
void ex_02(void) {
	/*
	2.	우리 시스템에서 사용하는 자료형(char, short, int, float, double)의 크기를 바이트로 출력하는 프로그램을 작성하시오.
	*/
	printf("=====ex_02=====\n");
	printf("char : %d\n", sizeof(char));
	printf("short : %d\n", sizeof(short));
	printf("int : %d\n", sizeof(int));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("\n");
}

void ex_04(void) {
	/*
	4.	함수 printf()를 이용하여 doo 변수에 실수 523.45를 저장하고 소수 한자리 까지만 출력하시오. 
	*/
	printf("=====ex_04=====\n");
	double doo = 523.45;
	printf("%.1f\n", doo);
	printf("\n");
}

void ex_06(void) {
	/*
	6.	입력 받은 정수를 함수 printf()를 이용하여 16진수로 10진수로 출력
	*/
	printf("=====ex_06=====\n");
	int in;
	printf("정수를 입력하시오. ");
	scanf_s("%d", &in);
	printf("16진수 : %x \n10진수 : %d", in, in);
	printf("\n");
}

void ex_08(void) {
	/*
	8.	다음 조건을 만족하는 프로그램을 작성하시오. 출력 결과의 이유를 설명하시오.
		•	문자형 연산 ‘A’ + 2 결과를 문자(%c)로 출력 
		•	문자형 연산 ‘A’ + 2 결과를 정수(%d)로 출력

	*/
	char a = 'A';
	printf("=====ex_08=====\n");
	printf("문자 출력 : %c\n", a + 2);
	//문자 출력시 'A'의 아스키값인 65에서 +2를 한 67에 문자 형태인 C를 출력
	printf("정수 출력 : %d\n", a + 2);
	//정수 출력시 'A'의 아스키값인 65에서 +2를 한 67을 출력
	printf("\n");
}

void ex_09(void) {
	/*
	9.	문자 a와 A의 차이를 출력하시오.
	*/
	char a = 'a';
	char A = 'A';
	printf("=====ex_09=====\n");
	printf("a : %d\n", a);
	printf("A : %d\n", A);
	printf("\n");
}

void ex_13(void) {
	/*
	13.	다음 조건을 만족하는 프로그램을 작성하시오.
		•	아파트 면적의 평을 표준입력으로 받아 제곱미터(m2)로 출력
		•	1평 3.305785 제곱미터는 define 전처리 지시자를 사용하시오.

	*/
	int in;
	printf("=====ex_13=====\n");
	printf("평수를 입력하시오. ");
	scanf_s("%d", &in);
	printf("%d평은 %f 제곱미터 입니다.", in, in * meter);
	printf("\n");
}

void main(void) {
	ex_02();
	ex_04();
	ex_06();
	ex_08();
	ex_09();
	ex_13();
}
