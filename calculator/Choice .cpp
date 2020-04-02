#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include"MATRIX.h"
#include"vector.h"

using namespace std;

VECTOR v1, v2;
MATRIX m1, m2;
string out_s[12];

void v_operation(string s) {
	VECTOR v;
	ofstream out("output.txt");

	// ������ ���� Ȯ��
	if (s == "mag") {
		out_s[0] = "Magnitude\n";
		out_s[1] = to_string(v1.Magnitude());
	}
	else if (s == "add") {
		out_s[0] = "vector\n";
		v = v1.Add(v2);
		out_s[1] = to_string(v.x) + " " + to_string(v.y) + " " + to_string(v.z);
	}
	else if (s == "inner") {
		out_s[0] = "scalar\n";
		out_s[1] = to_string(v1.InnerProduct(v2));
	}
	else if (s == "cross") {
		out_s[0] = "vector\n";
		v = v1.CrossProduct(v2);
		out_s[1] = to_string(v.x) + " " + to_string(v.y) + " " + to_string(v.z);
	}
	else {
		out_s[0] = "Not matched!!!";
	}
	for (int i = 0; out_s[i] != "\0"; i++) {
		out << out_s[i];
	}
	out.close();
}

void m_operation(string s) {
	MATRIX m;
	ofstream out("output.txt");
	if (s == "add") {
		out_s[0] = "matrix\n";
		m = m1.Add(m2);
		for (int i = 0; i < m.num_of_rows; i++) {
			for (int j = 0; j < m.num_of_columns; j++) {
				out_s[i + 1] += to_string(m.ele[i][j]) + " ";
			}
			out_s[i + 1] += "\n";
		}
	}
	else if (s == "mult") {
	}
	else if (s == "trans") {
	}
	else { 
		out_s[0] = "Not matched!!!";
	}

	for (int i = 0; out_s[i] != "\0"; i++) {
		cout << out_s[i];
		out << out_s[i];
	}

	out.close();
}

VECTOR vector_num_out(string s) {
	VECTOR v;
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
	v.y = stof(tokens[1]); // v.y
	v.z = stof(tokens[2]); // v.z
	return v;
}
MATRIX matrix_num_out(string s, MATRIX matrix, int num) {
	string buf;
	stringstream ss(s);

	vector<string> tokens;

	for (int i = 0; s[i] != '\0'; i++) { // ���Ϳ� �Է� Ȯ��

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

	if (tokens.size() != matrix.num_of_columns) { // ���� ���� Ȯ��
		cout << "Not matched!!!" << endl;
		exit(0);
	}

	for (int i = 0; i < matrix.num_of_columns; i++) {
		matrix.ele[num][i] = stof(tokens[i]);
	}
	return matrix;
}

MATRIX row_columns(string s) {
	MATRIX m;
	string buf;
	stringstream ss(s);

	vector<string> tokens;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 48 && s[i] <= 57) { // �ƽ�Ű�ڵ� ����

		}
		else if (s[i] == ' ') {

		}
		else { // �� ���ǹ��� ������ ���ϸ� �߸��� �Է����� �Ǵ�
			cout << "Not matched!!!" << endl;
			exit(0);
		}
	}
	while (ss >> buf) { // ���ڿ����� ������ ������ ����
		tokens.push_back(buf);
	}
	m.num_of_rows = stof(tokens[0]);
	m.num_of_columns = stof(tokens[1]);
	return m;
}

void second_matrix(string s[], int n) {
	if (m2.num_of_rows == 1) {
		m2 = matrix_num_out(s[n], m1, 0); n++; // ù ��� 1�� �Ǽ� ����
	}
	else if (m2.num_of_rows == 2) {
		m2 = matrix_num_out(s[n], m2, 0); n++;
		m2 = matrix_num_out(s[n], m2, 1); n++;
	}
	else if (m2.num_of_rows == 3) {
		m2 = matrix_num_out(s[n], m2, 0); n++;
		m2 = matrix_num_out(s[n], m2, 1); n++;
		m2 = matrix_num_out(s[n], m2, 2); n++;
	}
	else if (m2.num_of_rows == 4) {
		m2 = matrix_num_out(s[n], m2, 0); n++;
		m2 = matrix_num_out(s[n], m2, 1); n++;
		m2 = matrix_num_out(s[n], m2, 2); n++;
		m2 = matrix_num_out(s[n], m2, 3);
	}
	else {
		cout << "Not matched!!!" << endl;
		exit(0);
	}
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

	if (s[0] == v) { // ����
		v1 = vector_num_out(s[2]); // ����1 �Ǽ� ����
		if (s[3] != "\0") {
			v2 = vector_num_out(s[3]); // ����2 �Ǽ� ����
		}		

		v_operation(s[1]); // ���� ���� Ȯ��
		
	}
	else if (s[0] == m) { // ���
		m1 = row_columns(s[2]); // ù ��° ����� ��/�� ���� Ȯ��
		if (m1.num_of_rows == 1) {
			m1 = matrix_num_out(s[3], m1, 0); // ù ��� 1�� �Ǽ� ����

			m2 = row_columns(s[4]); // m2 ���
			second_matrix(s, 5);
		}
		else if (m1.num_of_rows == 2) {
			m1 = matrix_num_out(s[3], m1, 0);
			m1 = matrix_num_out(s[4], m1, 1);

			m2 = row_columns(s[5]); // m2 ���
			second_matrix(s, 6);
		}
		else if (m1.num_of_rows == 3) {
			m1 = matrix_num_out(s[3], m1, 0);
			m1 = matrix_num_out(s[4], m1, 1);
			m1 = matrix_num_out(s[5], m1, 2);

			m2 = row_columns(s[6]); // m2 ���
			second_matrix(s, 7);
		}
		else if (m1.num_of_rows == 4) {
			m1 = matrix_num_out(s[3], m1, 0);
			m1 = matrix_num_out(s[4], m1, 1);
			m1 = matrix_num_out(s[5], m1, 2);
			m1 = matrix_num_out(s[6], m1, 3);

			m2 = row_columns(s[7]); // m2 ���
			second_matrix(s, 8);
		}
		else {
			cout << "Not matched!!!" << endl;
			exit(0);
		}

		m_operation(s[1]); // ��� ���� Ȯ��

	}
	else {
		cout << "Not matched!!!" << endl;
	}

	in.close();
}

int main() {
	choice();
}