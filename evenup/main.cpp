#include <iostream>
#include <fstream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    // ifstream cin("evenup/evenup-04.in");

    int n;
    cin >> n;

    stack<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (!s.empty() && (s.top() + num) % 2 == 0) {
            s.pop();
        } else
            s.push(num);
    }

    cout << s.size() << endl;

    return 0;
}
