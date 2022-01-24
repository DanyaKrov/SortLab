#include "sortic.h"

void print_vector(const vector <int>& vector1) //print vector in console
{
	cout << "[";
	for (int i = 0; i < vector1.size() - 1; i++) {
		cout << vector1[i] << ", ";
	}
	cout << vector1[vector1.size() - 1] << "]" << endl;
}