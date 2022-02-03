#include "check_sortic.h"

void print_vector(const vector <int>& vector1) //print vector in console
{
	if (vector1.size() > 0) {
		cout << "[";
		for (int i = 0; i < vector1.size() - 1; i++) {
			cout << vector1[i] << ", ";
		}
		cout << vector1[vector1.size() - 1] << "]" << endl;
	}
}

int len(string str)
{
	int res = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		res += 1;
	}
	return res;
}

int str_to_int(string str) //convert string to integer
{
	int res = 0;
	int mult = 1;
	string rev_str = "";
	for (int i = len(str) - 1; i >= 0; i--) {
		res += (str[i] - 48) * mult;
		mult *= 10;
	}
	return res;
}

bool check_string(string str)
{
	bool res = true;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 48 && str[i] <= 57)
			res = true;
		else
			return false;
	}
	return res;
}

bool check_command(string str)
{
	if (str == "sa" || str == "sb" || str == "ss" || str == "pa" || str == "pb" || str == "ra" || str == "rb" || str == "rr" || str == "rra" || str == "rrb" || str == "rrr")
		return true;
	return false;
}

void reverse_vector(vector <int>& vector1) { //reversing vector
	vector <int> vector2 = {};
	for (int i = vector1.size() - 1; i >= 0; i--) {
		vector2.push_back(vector1[i]);
	}
	vector1 = {};
	for (int i = 0; i < vector2.size(); i++) {
		vector1.push_back(vector2[i]);
	}
}

void push_high(int element, vector<int>& vector) { //our push_front
	reverse_vector(vector);
	vector.push_back(element);
	reverse_vector(vector);
}

void command(string comm, vector <int>& a, vector <int>& b)
{
	if (comm == "sa")
		sa(a);
	else if (comm == "sb")
		sb(b);
	else if (comm == "ss")
		ss(a, b);
	else if (comm == "pa")
		pa(a, b);
	else if (comm == "pb")
		pb(a, b);
	else if (comm == "ra")
		ra(a);
	else if (comm == "rb")
		rb(b);
	else if (comm == "rr")
		rr(a, b);
	else if (comm == "rra")
		rra(a);
	else if (comm == "rrb")
		rrb(b);
	else if (comm == "rrr")
		rrr(a, b);
}