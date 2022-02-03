#include "check_sortic.h"

void input(vector <int>& mass, vector <string>& comm)
{
    string input_ = "";
    int num = 0;
    while (input_ != "!") {
        cin >> input_;
        if (check_string(input_)) {
            num = str_to_int(input_);
            mass.push_back(num);
        }
    }
    input_ = "";
    while (input_ != "*") {
        cin >> input_;
        if (check_command(input_))
            comm.push_back(input_);
    }
}

int main()
{
    vector <int> a = {};
    vector <int> a1 = {};
    vector <int> b = {};
    vector <string> commands = {};
    input(a, commands);
    for (int i = 0; i < a.size(); i++) {
        a1.push_back(a[i]);
    }
    sortic(a, b); // a - sorted by sortic
    for (int i = 0; i < commands.size(); i++) { // a1 - sorted by commands
        command(commands[i], a1, b);
    }
    if (a == a1)
        cout << "OK" << endl;
    else
        cout << "KO" << endl;
    return 0;
}
