#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("bookingaroom/1.in");
    int r, n;

    cin >> r >> n;

    bool rooms[100] = {false};

    for (int i = 0; i < n; i++) {
        int booked;
        cin >> booked;
        rooms[booked-1] = true;
    }

    bool late = true;
    for (int i = 0; i < r; i++) {
        if (rooms[i] == false) {
            cout << i+1 << endl;
            late = false;
            break;
        }

    }

    if (late) {
        cout << "too late" << endl;
    }


    return 0;
}
