#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("icpcteamselection/sample.in");

    int dataset, n, input;
    cin >> dataset;

    while (dataset--) {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n * 3; i++) {
            cin >> input;
            v.push_back(input);
        }
        sort(v.rbegin(), v.rend());
        // for (auto &it : v) {
        //     cout << it << endl;
        // }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i*2+1];
        }
        cout << sum << endl;
    }
    return 0;
}
