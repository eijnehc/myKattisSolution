#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("dirtydriving/2.in");

    int n;
    cin >> n;

    int p;
    cin >> p;

    vector<int> distance;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        distance.push_back(input);
    }

    sort(distance.begin(), distance.end());

    int dist = 0;
    for(int i = 0; i < distance.size(); i++) {
        int optimal = p * (i+1);
        int current = distance[i];
        dist = max(dist, optimal - current);
    }

    cout << dist + distance[0] << endl;

    return 0;
}
