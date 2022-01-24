#include "sortic.h"

void sa(vector <int>& vector_a)
{
	if (vector_a.size() > 1) {
		int temp = vector_a[0];
		vector_a[0] = vector_a[1];
		vector_a[1] = temp;
	}
}