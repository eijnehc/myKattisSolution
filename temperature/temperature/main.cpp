#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N,t;
    bool negative = false;
    cin >> N; cin.ignore();
    
    int val = 5526;

    for (int i = 0; i < N; i++) {
        cin >> t; cin.ignore();
        if (t < 0) {
            t *= -1;
            if (t < val) {
                val = t;
                negative = true;
            }
        } else {
            if (t <= val) {
                val = t;
                negative = false;
            }
        }
    }

    if (N == 0) {
        cout << 0;
    } else if (negative == true) {
        cout << val*-1 << endl;
    } else if (negative == false) {
        cout << val << endl;
    }
}

