#pragma once
#include <iostream>
#include <vector>

using namespace std;


//additional functions
void print_vector(const vector <int>& vector1, string arg);
void reverse_vector(vector<int>& vector1);
void push_high(int element, vector<int>& vector);
void rshift(vector <int>& mass);
void lshift(vector <int>& mass);

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

//additional functions
int mod(int num);
void print(vector<int> a, vector<int> b);
int max(vector<int>vector);
int min(vector<int>vector);