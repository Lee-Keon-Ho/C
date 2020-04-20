#include <stdio.h>
#include <conio.h>
/*
	 _getche()를 사용하여 세 수를 이력 받아 가장 큰 수와 가장 작은 수를 출력하는 프로그램을 작성하세요.
	(입력된 문자가 숫자가 아닐 경우는 '0' 으로 처리, 큰 수와 작은 수 판별은 조건 연산자 사용)
*/
void quiz_01() {
	
	  char x, y, z, max, min;

	  printf("\n0~9까지의 숫자 입력 : ");
	  x = _getche();

	  printf("\n0~9까지의 숫자 입력 : ");
	  y = _getche();

	  printf("\n0~9까지의 숫자 입력 : ");
	  z = _getche();

	  x = (x >= '0' && x <= '9' ? x : '0');
	  y = (y >= '0' && y <= '9' ? y : '0');
	  z = (z >= '0' && z <= '9' ? z : '0');

	  max = x > y ? (x > z ? x : z) : (y > z ? y : z);
	  printf("\n입력한 수중에서 가장 큰 수 = %c 입니다.", max);

	  min = x < y ? (x < z ? x : z) : (y < z ? y : z);
	  printf("\n입력한 수중에서 가장 작은 수 = %c 입니다.", min);
	}


void main() {
	quiz_01();
}
