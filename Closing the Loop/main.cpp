#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main() {
    ifstream cin("closingtheloop/1.in");

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        priority_queue<int> red;
        priority_queue<int> blue;
        for (int j = 0; j < m; j++) {

            string input;

            cin >> input;

            int len = stoi(input.substr(0,input.length() - 1));

            if (input.back() == 'R')
                red.push(len);
            else
                blue.push(len);
        }

        int length = 0;
        if (red.empty() == true || blue.empty() == true) {
            cout << "Case #" << i+1 << ": " << length << endl;
        } else {
            while (red.empty() == false && blue.empty() == false) {
                length += red.top() + blue.top() - 2;
                red.pop();
                blue.pop();
            }
            cout << "Case #" << i+1 << ": " << length << endl;
        }
    }
    return 0;
}
