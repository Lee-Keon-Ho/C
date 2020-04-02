#include "vector.h"

float VECTOR::Magnitude() {
	return float(sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
}

VECTOR VECTOR::Add(VECTOR v) {
	VECTOR new_VECTOR;
	new_VECTOR.x = x + v.x;
	new_VECTOR.y = y + v.y;
	new_VECTOR.z = z + v.z;
	return new_VECTOR;
}

VECTOR VECTOR::Subtract(VECTOR v) {
	VECTOR new_VECTOR;
	new_VECTOR.x = x - v.x;
	new_VECTOR.y = y - v.y;
	new_VECTOR.z = z - v.z;
	return new_VECTOR;
}

float VECTOR::InnerProduct(VECTOR v) {
	return x * v.x + y * v.y + z * v.z;
}

VECTOR VECTOR::CrossProduct(VECTOR v) {
	return v;
}