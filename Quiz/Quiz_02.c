#include <stdio.h>;
#include <conio.h>;
/*
  do while 반복을 이용하여 아래와 같이 동작하게 작성하시오
  -----------------------------------------------------
  문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : c
  알파벳입니다
  문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : 1
  숫자입니다. 지금까지 숫자들의 합=1
  문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : 5
  숫자입니다. 지금까지 숫자들의 합=6
  문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : B
  알파벳입니다
  문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : #
  알파벳과 숫자 이외의 문자를 입력하여 종료합니다.
  -----------------------------------------------------
*/
void quiz_02() {
	char c;
	int sum = 0;
	int true_And_False = 1;
	do {
		printf("\n문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : ");
		c = _getche();
		if (c >= '0' && c <= '9') {
			printf("\n숫자입니다. 지금까지숫자들의 합=%d", sum += (c - '0'));
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			printf("\n알파벳입니다.");
		}
		else {
			printf("\n알파벳과 숫자 이외의 문자를 입력하여 종료합니다.");
			true_And_False = 0;
		}
		
	} while (true_And_False);
}

void main() {
	quiz_02();
}