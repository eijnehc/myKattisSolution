#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("rationalsequence2/sample001.in");

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k, num, den; char dummy;
        cin >> k >> num >> dummy >> den;
        // cout << k << p << q << endl;

        stack<char> side;
        while(num > 1 || den > 1) {
            if (num > den) { // if the numerator is larger than the denominator
                side.push('R');
                num -= den;
            } else {
                side.push('L');
                den -= num;
            }
        }

        int n = 1;
        while (!side.empty()) {
            if (side.top() == 'R') {
                n = 1 + (n * 2);
            } else {
                n *= 2;
            }
            side.pop();
        }

        cout << k << " " << n << endl;
    }


    return 0;
}
