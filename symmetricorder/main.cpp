#include <iostream>
#include <fstream>
#include <stack>
#include <deque>

using namespace std;

int main() {
    // ifstream cin("symmetricorder/sample.in");

    int n, it = 1;
    string input;
    stack<string> list, even;
    deque<string> odd;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            cin >> input;
            list.push(input);
        }
        int k = n;
        for (int i = 0; i < n; i++) {
            if ((k+1)%2 == 0) {
                even.push(list.top());
            } else {
                odd.push_back(list.top());
            }
            list.pop();
            k--;
        }

        cout << "SET " << it << endl;
        it++;
        while (!even.empty()) {
            cout << even.top() << endl;
            even.pop();
        }
        while (!odd.empty()){
            cout << odd.front() << endl;
            odd.pop_front();
        }
    }

    return 0;
}
