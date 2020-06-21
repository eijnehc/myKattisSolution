#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("ferryloading4/ferry-sample.in");

    int testcase;
    cin >> testcase;
    queue<int> Q[2];

    while(testcase--) {
        int lShip, m;
        cin >> lShip >> m;

        lShip *= 100; // convert to meters
        for (int i = 0; i < m; i++) {
            int length; string side;
            cin >> length >> side;

            if (side == "left") {
                Q[0].push(length);
            } else {
                Q[1].push(length);
            }
        }

        int side = 0, count = 0;
        while (!Q[0].empty() || !Q[1].empty()) {
            int totalLength = 0;

            while (!Q[side].empty() && (totalLength + Q[side].front()) < lShip ) {
                totalLength += Q[side].front();
                Q[side].pop();
            }

            side = (side + 1) % 2;
            count++;
        }
        cout << count << endl;
    }


    return 0;
}
