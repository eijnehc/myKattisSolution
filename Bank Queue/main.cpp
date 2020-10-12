#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int const N = 47;
int q[N], n, t;

bool sortcol(const pair<int,int> v1, const pair<int,int> v2) {
    return v1.first > v2.first;
}

int main(int argc, char const *argv[])
{
    // ifstream cin("bank/bank-01.in");
    memset(q, -1, sizeof(q));
    cin >> n >> t;

    int cash, time;

    vector< pair<int,int> > queue;
    for (int i = 0; i < n; i++) {
        cin >> cash >> time;
        queue.emplace_back(cash, time);
    }
    // for (auto &it : queue) {
    //     cout << it.first << " " << it.second << endl;
    // }
    sort(queue.begin(), queue.end(), sortcol);
    // for (auto &it : queue) {
    //     cout << it.first << " " << it.second << endl;
    // }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int idx = queue[i].second;
        while (idx >= 0) {
            if (q[idx] == -1) {
                q[idx] = 0;
                sum += queue[i].first;
                break;
            }
            idx--;
        }
    }
    cout << sum << endl;

    return 0;
}

