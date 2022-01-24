#include "sortic.h"

void reverse_vector(vector <int>& vector1) { //reversing vector
	vector <int> vector2 = {};
	for (int i = vector1.size() - 1; i >= 0; i--) {
		vector2.push_back(vector1[i]);
	}
	vector1 = {};
	for (int i = 0; i < vector2.size(); i++) {
		vector1.push_back(vector2[i]);
	}
}

void push_high(int element, vector<int>& vector) { //our push_front
	reverse_vector(vector);
	vector.push_back(element);
	reverse_vector(vector);
}