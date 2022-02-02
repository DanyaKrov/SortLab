#include "sortic.h"


void pa(vector<int>& vector_a, vector<int>& vector_b) { //function pa
	if (vector_b.size() > 0) { //check if vector is empty
		push_high(vector_b[0], vector_a);
		vector <int> vector3 = {};
		for (int i = 0; i < vector_a.size(); i++) {
			vector3.push_back(vector_a[i]);
		}
		vector_a = {};
		for (int i = 0; i < vector3.size(); i++) {
			if (i != 1)
				vector_a.push_back(vector3[i]);
		}
	}
}

void pb(vector<int>& vector_a, vector<int>& vector_b) { //function pb
	if (vector_a.size() > 0) { //check if vector is empty
		push_high(vector_a[0], vector_b);
		vector <int> vector3 = {};
		for (int i = 0; i < vector_b.size(); i++) {
			vector3.push_back(vector_b[i]);
		}
		vector_b = {};
		for (int i = 0; i < vector3.size(); i++) {
			if (i != 1)
				vector_b.push_back(vector3[i]);
		}
	}
}