#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // ifstream cin("gearchanging/01.in");


    double n, m, p;

    cin >> n >> m >> p;
    p /= 100;

    vector<int> crank, backGear;
    double input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        crank.push_back(input);
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        backGear.push_back(input);
    }

    set<double> gearRatio;
    for (double i : crank) {
        for (double j : backGear) {
            gearRatio.insert(i/j);
        }
    }

    // for (double it : gearRatio) {
    //     cout << it << endl;
    // }

    bool rideOn = true;
    double curr = *gearRatio.begin();
    gearRatio.erase(curr);
    for (auto it : gearRatio) {
        if (curr + curr * p < it) {
            rideOn = false;
            break;
        }
        curr = it;
    }

    if (rideOn) {
        cout << "Ride On!" << endl;
    } else
        cout << "Time to change gears!" << endl;

    return 0;
}
