#include "check_sortic.h"

void lshift(vector <int>& mass)
{
    int x = mass[0];
    for (int i = 0; i < mass.size() - 1; i++) {
        mass[i] = mass[i + 1];
    }
    mass[mass.size() - 1] = x;
}

void ra(vector <int>& vector_a)
{
    if (vector_a.size() > 0) {
        lshift(vector_a);
    }
}

void rb(vector <int>& vector_b)
{
    if (vector_b.size() > 0) {
        lshift(vector_b);
    }
}

void rr(vector <int>& vector_a, vector <int>& vector_b)
{
    ra(vector_a);
    rb(vector_b);
}