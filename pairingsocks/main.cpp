#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("pairingsocks/1.in");

    int n;
    cin >> n;

    stack<int> oPile;
    stack<int> aPile;
    for (int i = 0; i < 2 * n; i++) {
        int input;
        cin >> input;
        oPile.push(input);
    }

    int count = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (!aPile.empty()) {
            if (oPile.top() != aPile.top()) {
                aPile.push(oPile.top());
                oPile.pop();
                count++;
            } else {
                count++;
                oPile.pop();
                aPile.pop();
            }
        } else {
            aPile.push(oPile.top());
            oPile.pop();
            count++;
        }

    }

    if (oPile.empty() && aPile.empty()) {
        cout << count << endl;
    } else {
        cout << "impossible" << endl;
    }


    return 0;
}
