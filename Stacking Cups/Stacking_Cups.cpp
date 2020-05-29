#include <iostream>
#include <fstream>
#include <map>

using namespace std;

bool is_number(const string& s)
{
    string::const_iterator it = s.begin();

    while (it != s.end() && isdigit(*it))
        ++it;
    return !s.empty() && it == s.end();
}

int main() {
    //ifstream cin("cups/cups-01.in");

    int n;
    cin >> n;

    int radius;
    string color;
    map<int, string> cups;

    for (int i = 0; i < n; i++) {
        string firstParam, secondParam;

        cin >> firstParam >> secondParam;

        if (is_number(firstParam)) {
            // if it is a number
            radius = stoi(firstParam) / 2;
            color = secondParam;
        } else {
            radius = stoi(secondParam);
            color = firstParam;
        }

        cups.insert(pair<int,string>(radius,color));
    }

    for (auto i = cups.begin(); i != cups.end(); i++)
        cout << i->second << endl;
}
