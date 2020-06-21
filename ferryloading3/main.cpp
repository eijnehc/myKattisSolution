#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

#define maximum 10004
int timeArrival[maximum];
int timeLeave[maximum];

int main(int argc, char const *argv[]) {
    // ifstream cin("ferryloading3/ferryloading3-1.in");
    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        int n, t, m;
        queue<int> Q[2];
        cin >> n >> t >> m;

        for (int j = 0; j < m; j++) {
            int arrival; string bank;

            cin >> arrival >> bank;
            timeArrival[j] = arrival;
            if (bank == "left") {
                Q[0].push(j);
            } else {
                Q[1].push(j);
            }
        }
        int actualTime = 0, side = 0;
        while (!Q[0].empty() || !Q[1].empty()) {
            int next = Q[0].empty() ? timeArrival[Q[1].front()] :
                       Q[1].empty() ? timeArrival[Q[0].front()] :
                       min( timeArrival[Q[0].front()], timeArrival[Q[1].front()]);
            actualTime = max(actualTime, next);

            int count = 0;
            while(!Q[side].empty() && count < n && timeArrival[Q[side].front()] <= actualTime) {
                timeLeave[Q[side].front()] = actualTime + t;
                Q[side].pop();
                count++;
            }
            actualTime += t;
            side = (side + 1) % 2;
        }

        for (int i = 0; i < m; i++) {
            cout << timeLeave[i] << endl;
        }

        if (i < c - 1) {
            cout << endl;
        }
    }

    return 0;
}
