#include "sortic.h"


int mod(int num) {
	if (num < 0)
		return num * -1;
	else
		return num;
}

void print(vector<int> a, vector<int> b) { //printing two vectors
	print_vector(a, "a");
	print_vector(b, "b");
}

int max(vector<int>vector) {
    int max = -1000;
    if (vector.size() == 0)
        return 0;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i] > max)
            max = vector[i];
    }
    return max;
}
int min(vector<int>vector) {
    int min = 1000;
    if (vector.size() == 0)
        return 0;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i] < min)
            min = vector[i];
    }
    return min;
}