#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // fstream cin("server/server-02.in");

    int n, t;

    cin >> n >> t;

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        int task;
        cin >> task;
        if((sum + task) <= t) {
            sum += task;
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;


    return 0;
}
