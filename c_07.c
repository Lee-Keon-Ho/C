#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
/*
  명령어 라인(메인함수의 매개변수)으로부터 받은 정수를 그 값을 표현하는 문자열로 출력하는 프 로그램을 적성하시오.
  10000보다 작은 정수로 입력 받으며, 출력은 아래와 같은 방법으로 합니다. 
  
  C:> exprog.exe 3496
    입력한 정수는[삼천 사백 구십 육]입니다.
*/
void f20(char *str) {
	
	int i, j = 0;
	char c1[10][3] = { "영", "일", "이","삼","사","오","육","칠","팔","구" };
	char c2[3][3] = { "천","백","십" };
	

	if (atoi(str) > 10000) {
		printf("잘못된 입력입니다.\n");
	}
	else {
		
		printf("입력한 정수는 [");
		for (i = 0; i < sizeof(str) / sizeof(char); i++) {
			if (str[i] != '0') {
				printf("%s", c1[str[i] - '0']);
			}
			if (j < 3) {
				if (str[i] == '0') {

				}
				else {
					printf("%s ", c2[j]);
				}
				j++;
			}
		}
		printf("]입니다.\n");
	}
}

void main(int argc, char *argv[]) {
	f20(argv[1]);
}
