#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

bool dist(vector<double>& v, double w) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i+1] - v[i] > w) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    // ifstream cin("lawnmower/sample.in");

    int nx, ny;
    double w;

    while (cin >> nx >> ny >> w && (nx > 0) && (ny > 0) && (w > 0)) {
        double input;

        vector<double> length;
        for (int i = 0; i < nx; i ++) {
            cin >> input;
            length.push_back(input);
        }

        vector<double> breadth;
        for (int i = 0; i < ny; i ++) {
            cin >> input;
            breadth.push_back(input);
        }

        sort(length.begin(), length.end());
        sort(breadth.begin(), breadth.end());

        bool le = false, wi = false;
        if (length[0] <= w/2 && length[nx-1] >= (75 - w/2) && dist(length, w)) {
            le = true;
        }

        if (breadth[0] <= w/2 && breadth[ny-1] >= (100 - w/2) && dist(breadth, w)) {
            wi = true;
        }

        if (wi && le)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
