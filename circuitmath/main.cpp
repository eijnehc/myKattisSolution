#include <iostream>
#include <fstream>
#include <stack>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("circuitmath/1.in");
    int n; char logic, alpha = 'A'; string str;
    cin >> n;

    map<char, char> t;
    for (int i = 0; i < n; i++) {
        cin >> logic;
        t[alpha] = logic;
        alpha++;
    }

    // for (auto &it : t) {
    //     cout << it.first << " " << it.second << endl;
    // }

    cin.ignore();
    getline(cin, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    // cout << str << endl;
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        cin >> str[i];
        if (isalpha(str[i])) {
            s.push(t[str[i]]);
        } else if (str[i] == '*') {
            char temp = s.top();
            s.pop();
            if (s.top() == temp) {
                continue;
            } else {
                s.top() = 'F';
            }
        } else if (str[i] == '+') {
            char temp = s.top();
            s.pop();
            if (s.top() == 'F' && temp == 'F') {
                continue;
            } else {
                s.top() = 'T';
            }
        } else {
            if (s.top() == 'F') {
                s.top() = 'T';
            } else {
                s.top() = 'F';
            }
        }
    }

    cout << s.top() << endl;

    return 0;
}
