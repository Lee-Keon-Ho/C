#include <stdio.h>
#include <conio.h>
#include <ctype.h>

  /*
  소문자로 구성된 문자열을 입력 받아 그 문자열에서 각 문자가 몇 개 존재하는지 출력하는 프로그램을 1차원 배열과 포인터를 이용하여 작성하세요.
  모든 배열의 접근은 포인터를 이용하여 작성합니다.

  >> 프로그램 수행 예
  소문자 문자열 입력 : apple
  a=1
  e=1
  l=1
  p=2

  >> 프로그램 수행 예
  소문자 문자열 입력 : aaaazzbbb
  a=4
  b=3
  z=2
   */

void quiz_05() {
	char str[50], *pstr;
	int eng[26] = { 0 }, * pint, i, t_f = 0;
	printf("소문자 문자열 입력 : ");
	gets_s(str, 50);

	pstr = str;
	pint = eng;

	for (i = 0; str[i]; i++) {
		if (!islower(pstr[i])) {
			t_f = 1;
			break;
		}
		pint[pstr[i] - 'a'] += 1;
	}

	if (t_f) {
		printf("소문자 이외의 문자열 입력하여 종료합니다.");
	}
	else {
		for (i = 0; i < sizeof(eng) / sizeof(int); i++) {
			if (*(pint + i) > 0) {
				printf("%c = %d\n", i + 'a', *(pint + i));
			}
		}
	}
}

void main() {
	quiz_05();
}
