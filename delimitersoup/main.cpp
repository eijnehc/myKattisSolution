#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("delimitersoup/05.in");
    int n, i;
    cin >> n;

    stack<char> s;
    string str;
    char c;
    bool okay = true;
    cin.ignore(); getline(cin,str);
    for (i = 0; i < str.length(); i++) {
        c = str[i];
        // cout << i << endl;
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c != ' ') {
            if (s.empty()) {
                okay = false;
                break;
            }
            if (s.top() == '(' && c == ')') {
                s.pop();
            } else if (s.top() == '{' && c == '}') {
                s.pop();
            } else if (s.top() == '[' && c == ']') {
                s.pop();
            } else {
                okay = false;
                break;
            }
        } else {
            continue;
        }
    }
    if (okay) {
        cout << "ok so far" << endl;
    } else {
        cout << c << " " << i << endl;
    }

    return 0;
}
