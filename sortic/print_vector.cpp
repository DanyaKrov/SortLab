#include "sortic.h"

void print_vector(const vector <int>& vector1, string arg) //print vector in console
{
	if (vector1.size() > 0) {
		cout <<arg << " = [";
		for (int i = 0; i < vector1.size() - 1; i++) {
			cout << vector1[i] << ", ";
		}
		cout << vector1[vector1.size() - 1] << "]" << endl;
	}
	else
		cout <<arg <<" = []" <<endl;
}