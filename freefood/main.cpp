#include <iostream>
#include <fstream>
#include <unordered_set>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("freefood/3.in");

    int n;
    cin >> n;

    unordered_set<int> events;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        for (int i = start; i <= end; i++) {
            events.insert(i);
        }
    }

    cout << events.size() << endl;

    return 0;
}
