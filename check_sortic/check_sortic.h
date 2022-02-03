#pragma once
#include <iostream>
#include <vector>

using namespace std;

//additional functions
void print_vector(const vector <int>& vector1);
int len(string str);
int str_to_int(string str);
bool check_string(string str);
bool check_command(string str);
void reverse_vector(vector<int>& vector1);
void push_high(int element, vector<int>& vector);
void rshift(vector <int>& mass);
void lshift(vector <int>& mass);
void command(string comm, vector <int>& a, vector <int>& b);

//s functions
void sa(vector <int>& vector_a);
void sb(vector <int>& vector_b);
void ss(vector <int>& vector_a, vector <int>& vector_b);

//p functions
void pa(vector<int>& vector_a, vector<int>& vector_b);
void pb(vector<int>& vector_a, vector<int>& vector_b);

//r functions
void ra(vector <int>& vector_a);
void rb(vector <int>& vector_b);
void rr(vector <int>& vector_a, vector <int>& vector_b);

//rr functions
void rra(vector<int>& vector_a);
void rrb(vector<int>& vector_b);
void rrr(vector<int>& vector_a, vector<int>& vector_b);

//sortic functions
void sortic(vector <int>& a, vector <int>& b);

//check_sortic functions(main)
void input(vector <int>& mass);