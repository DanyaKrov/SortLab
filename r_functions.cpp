#include "sortic.h"

void rshift(vector <int>& mass) {
    int x = mass[mass.size() - 1];
    for (int i = mass.size() - 1; i >= 1; i--) {
        mass[i] = mass[i - 1];
    }
    mass[0] = x;
}

void ra(vector<int>& vector_a) { //function ra
	if (vector_a.size() > 0) { //check if vector is empty
        rshift(vector_a);
	}
}

void rb(vector<int>& vector_b) { //function rb
	if (vector_b.size() > 0) { //check if vector is empty
        rshift(vector_b);
	}
}

void rr(vector<int>& vector_a, vector<int>& vector_b) { //function rr
    ra(vector_a);
    rb(vector_b);
}
