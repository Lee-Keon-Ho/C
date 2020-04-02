#include"MATRIX.h"

MATRIX MATRIX::Add(MATRIX m) {
	MATRIX new_m;
	new_m.num_of_rows = m.num_of_rows;
	new_m.num_of_columns = m.num_of_columns;
	for (int i = 0; i < num_of_rows; i++) {
		for (int j = 0; j < num_of_columns; j++) {
			new_m.ele[i][j] = ele[i][j] + m.ele[i][j];
		}
	}
	return new_m;
}

MATRIX MATRIX::Subtract(MATRIX m) {
	return m;
}

MATRIX MATRIX::Multiply(MATRIX m) {
	return m;
}
/*
MATRIX MATRIX::Transpose() {
	MATRIX m;
	return m;
}
*/
