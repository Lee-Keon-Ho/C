#include <stdio.h>
#include <conio.h>

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