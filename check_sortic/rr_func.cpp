#include "check_sortic.h"

void rshift(vector <int>& mass) {
    int x = mass[mass.size() - 1];
    for (int i = mass.size() - 1; i >= 1; i--) {
        mass[i] = mass[i - 1];
    }
    mass[0] = x;
}

void rra(vector<int>& vector_a) { //function rra
    if (vector_a.size() > 0) { //check if vector is empty
        rshift(vector_a);
    }
}

void rrb(vector<int>& vector_b) { //function rrb
    if (vector_b.size() > 0) { //check if vector is empty
        rshift(vector_b);
    }
}

void rrr(vector<int>& vector_a, vector<int>& vector_b) { //function rrr
    rra(vector_a);
    rrb(vector_b);
}