#include "check_sortic.h"


bool issorted(vector<int>vector) {
    if (vector.size() < 2)
        return true;
    for (int i = 1; i < vector.size(); i++) {
        if (vector[i] < vector[i - 1])
            return false;
    }
    return true;
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

void sortic(vector <int>& a, vector <int>& b)
{
    int len = a.size();
    while (b.size() < len) {
        while (a[0] != min(a)) {
            ra(a);
        }
        pb(a, b);
    }
    for (int i = 0; i < len; i++) {
        pa(a, b);
    }
}