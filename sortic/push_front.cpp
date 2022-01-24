#include "sortic.h"


vector<int> reverse_vector(vector<int> vector1) { //reversing vector
	vector<int> vector2;
	for (int i = vector1.size() - 1; i >= 0; i++)
		vector2.push_back(vector1[i]);
	return vector2;
}

void push_high(int element, vector<int>& vector) { //our push_front
	vector = reverse_vector(vector);
	vector.push_back(element);
	vector = reverse_vector(vector);
}
