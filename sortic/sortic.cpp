#include "sortic.h"


bool issorted(vector<int>vector) {
    if (vector.size() < 2)
        return true;
    for (int i = 1; i < vector.size(); i++) {
        if (vector[i] < vector[i - 1])
            return false;
    }
    return true;
}
bool isRevsorted(vector<int>vector) {
    if (vector.size() < 2)
        return true;
    for (int i = 1; i < vector.size(); i++) {
        if (vector[i] > vector[i - 1])
            return false;
    }
    return true;
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
    bool isneg = (str[0] == '-');
    int res = 0;
    int mult = 1;
    string rev_str = "";
    for (int i = len(str) - 1; i >= isneg; i--) {
        res += (str[i] - 48) * mult;
        mult *= 10;
    }
    if (isneg)
        res *= -1;
    return res;
}
void full(vector<int>& vector) {
    string s;
    cin >> s;
    while (s != "!") {
        vector.push_back(str_to_int(s));
        cin >> s;
    }
}
int main()
{
    vector <int> a;
    vector <int> b;
    full(a);
    int len = a.size();
    while (b.size() < len && !(issorted(a) && issorted(b)) || (a.size() == len && issorted(a))){
        while (a[0] != min(a)) {
            ra(a);
            cout << "ra" <<endl;
            print(a, b);
        }
        if ((issorted(a) && isRevsorted(b)))
            break;
        pb(a, b);
        cout << "pb" <<endl;
        print(a, b);
    }
    len = b.size();
    int len2 = a.size();
    for (int i = 0; i < len; i++) {
        pa(a, b);
        cout << "pa" <<endl;
        print(a, b);
    }
}