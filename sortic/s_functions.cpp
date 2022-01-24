#include "sortic.h"

void sa(vector <int>& vector_a)
{
	if (vector_a.size() > 1) {
		int temp = vector_a[0];
		vector_a[0] = vector_a[1];
		vector_a[1] = temp;
	}
}

void sb(vector <int>& vector_b)
{
	if (vector_b.size() > 1) {
		int temp = vector_b[0];
		vector_b[0] = vector_b[1];
		vector_b[1] = temp;
	}
}

void ss(vector <int>& vector_a, vector <int>& vector_b)
{
	sa(vector_a);
	sb(vector_b);
}