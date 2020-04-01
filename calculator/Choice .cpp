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


	for (int i = 0; s[i]!='\0'; i++) { // ���Ϳ� �Է� Ȯ��
		
		if (s[i] >= 48 && s[i] <= 57) { // �ƽ�Ű�ڵ� ����

		}
		else if (s[i] == '-' || s[i] == '\.' || s[i] == ' ') { // '-',',' ���� �� �Է°����� ���� Ȯ��
			
		}
		else { // �� ���ǹ��� ������ ���ϸ� �߸��� �Է����� �Ǵ�
			cout << "Not matched!!!" << endl;
			exit(0);
		}
	}

	while (ss >> buf) { // ���ڿ����� ������ ������ ����
		tokens.push_back(buf);
	}

	if (tokens.size() != 3) { // 3���� ���� Ȯ��
		cout << "Not matched!!!" << endl;
		exit(0);
	}
	

	v.x = stof(tokens[0]); // v.x�� ���� x�� ����
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

	while (getline(in, s[n])) { // �Է����� ���پ� �о��� s�迭�� ����
		n++;
	}

	if (s[0] == v) {
		operation = v_operation(s[1]); // ���� ���� Ȯ��
		v1 = num_out(s[2]); // ����1 �Ǽ� ����
		v2 = num_out(s[3]); // ����2 �Ǽ� ����
		cout << v1.x << " " << v1.y << " " << v1.z << " " << endl;
		cout << v2.x << " " << v2.y << " " << v2.z << " " << endl;
	}
	else if (s[0] == m) {
		operation = m_operation(s[1]); // ��� ���� Ȯ��
	}
	else {
		cout << "Not matched!!!" << endl;
	}

	in.close();
}

int main() {
	choice();
}