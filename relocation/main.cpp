#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("relocation/1.in");

    int companies, queries;

    cin >> companies >> queries;

    vector<int> country(companies);
    for (int i = 0; i < companies; i++) {
        cin >> country[i];
    }
    int a,b,c;
    for (int i = 0; i < queries; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            country[b-1] = c;
        } else {
            cout << abs(country[b-1] - country[c-1]) << endl;
        }
    }

    return 0;
}
