#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("ladder/ladder.01.in");

    double h, v;
    cin >> h >> v;

    cout << ceil(h/sin(v / 180 * M_PI)) << endl;

    return 0;
}
