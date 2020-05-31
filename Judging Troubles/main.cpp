#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

void fill(unordered_map<string,int>& m, int n) {
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (m.find(s) == m.end()) {
            m[s] =  1;
        } else {
            m[s] += 1;
        }
    }
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main()
{
    ifstream cin("judging/1.in");

    int n;

    cin >> n;

    unordered_map<string, int> dom, kattis;
    fill(dom, n);
    fill(kattis, n);

    int count = 0;
    for(unordered_map<string, int>::iterator it = dom.begin(); it != dom.end(); ++it) {
        if (kattis.find(it->first) != kattis.end()) {
            count += min(it->second, kattis.find(it->first)->second);
        }
    }

    cout << count << endl;
    return 0;
}


