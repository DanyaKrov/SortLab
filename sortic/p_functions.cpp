#include "sortic.h"


void pa(vector<int>& vector_a, vector<int>& vector_b) { //������� ��� ���������� ������� "pa"
	if (vector_b.size() > 0) { //�������� ������� �� �������
		push_high(vector_b[0], vector_a);
	}
}

void pb(vector<int>& vector_a, vector<int>& vector_b) { //������� ��� ���������� ������� "pb"
	if (vector_a.size() > 0) { //�������� ������� �� �������
		push_high(vector_a[0], vector_b);
	}
}