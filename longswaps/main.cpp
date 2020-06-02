#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("longswaps/001-sample-1.in");

    string s;
    int k;
    cin >> s >> k;

    if (k <= ceil(s.size()/2)) {
        cout << "Yes" << endl;
    } else {
        string original = s.substr(s.size()-k,2 * k - s.size());
        // cout << original << endl;
        sort(s.begin(), s.end());
        // cout << s.substr(s.size()-k,2 * k - s.size()) << endl;
        if (original == s.substr(s.size()-k,2 * k - s.size())) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
