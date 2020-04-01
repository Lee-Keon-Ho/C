#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include"MATRIX.cpp"
#include"VECTOR.cpp"

using namespace std;

VECTOR v1, v2;
MATRIX m1, m2;


string v_operation(string s) {
	if (s == "mag") {
		return s;
	}
	else if (s == "add") {
		return s;
	}
	else if (s == "inner") {
		return s;
	}
	else if (s == "cross") {
		return s;
	}
	else {
		return "Not matched!!!";
	}
}

string m_operation(string s) {
	if (s == "add") {
		return s;
	}
	else if (s == "mult") {
		return s;
	}
	else if (s == "trans") {
		return s;
	}
	else {
		return "Not matched!!!";
	}
}

VECTOR num_out(string s) {
	VECTOR v;
	string test;
	string buf;
	stringstream ss(s);

	vector<string> tokens;


	for (int i = 0; s[i]!='\0'; i++) { // 벡터에 입력 확인
		
		if (s[i] >= 48 && s[i] <= 57) { // 아스키코드 숫자

		}
		else if (s[i] == '-' || s[i] == '\.' || s[i] == ' ') { // '-',',' 공백 등 입력가능한 문자 확인
			
		}
		else { // 위 조건문에 만족을 못하면 잘못된 입력으로 판단
			cout << "Not matched!!!" << endl;
			exit(0);
		}
	}

	while (ss >> buf) { // 문자열에서 공백을 기준을 나눔
		tokens.push_back(buf);
	}

	if (tokens.size() != 3) { // 3차원 벡터 확인
		cout << "Not matched!!!" << endl;
		exit(0);
	}
	

	v.x = stof(tokens[0]); // v.x에 벡터 x값 대입
	v.y = stof(tokens[1]); // y
	v.z = stof(tokens[2]); // z
	return v;
}

void choice() {
	string s[12];
	int n = 0;
	string v = "vector";
	string m = "matrix";
	string operation;

	ifstream in("input.txt");

	while (getline(in, s[n])) { // 입력파일 한줄씩 읽어드려 s배열에 저장
		n++;
	}

	if (s[0] == v) {
		operation = v_operation(s[1]); // 벡터 연산 확인
		v1 = num_out(s[2]); // 벡터1 실수 추출
		v2 = num_out(s[3]); // 벡터2 실수 추출
		cout << v1.x << " " << v1.y << " " << v1.z << " " << endl;
		cout << v2.x << " " << v2.y << " " << v2.z << " " << endl;
	}
	else if (s[0] == m) {
		operation = m_operation(s[1]); // 행렬 연산 확인
	}
	else {
		cout << "Not matched!!!" << endl;
	}

	in.close();
}

int main() {
	choice();
}