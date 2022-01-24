#include "sortic.h"


void pa(vector<int>& vector_a, vector<int>& vector_b) { //функция для выполнения команды "pa"
	if (vector_b.size() > 0) { //проверка вектора на пустоту
		push_high(vector_b[0], vector_a);
	}
}

void pb(vector<int>& vector_a, vector<int>& vector_b) { //функция для выполнения команды "pb"
	if (vector_a.size() > 0) { //проверка вектора на пустоту
		push_high(vector_a[0], vector_b);
	}
}