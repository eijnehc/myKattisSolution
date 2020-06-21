#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("princesspeach/in1.in");
    int obs, n;
    cin >> obs >> n;

    map<int, int> table;
    for (int i = 0; i < obs; i++) {
        table[i] = 0;
    }

    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        table[num]++;
    }

    int count = 0;
    for (int i = 0; i < obs; i++) {
        if (table[i] == 0) {
            cout << i << endl;
            count++;
        }
    }

    cout << "Mario got " << obs-count << " of the dangerous obstacles." << endl;

    return 0;
}
