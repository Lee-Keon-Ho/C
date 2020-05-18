#include <stdio.h>
#include <conio.h>
  /*
  소문자로 구성된 문자열을 입력 받아 그 문자열에서 각 문자가 몇 개 존재하는지 출력하는 프로그램을 1차원 배열을 사용하여 작성하세요.

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
  
void quiz_04() {

	char str[50];
	int eng[26] = {0}; //abcdefghijklnmopqrstuvwxyz
	printf("소문자 문자열 입력 : ");
	gets_s(str, 50);
	for (int i = 0; str[i] != NULL ; i++) {
		eng[str[i] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++) {
		if (eng[i] > 0) {
			printf("%c = %d\n", i + 'a', eng[i]);
		}
	}
}

void main() {
	quiz_04();
}
