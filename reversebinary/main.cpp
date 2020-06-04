#include <iostream>
#include <fstream>
#include <stack>
#include <cmath>

using namespace std;

int n;
stack<int> binary;

int main() {
    // fstream cin("reversebinary/binary-sample-1.in");

    cin >> n;

    while (n != 0) {
        int remainder = n % 2;
        n /= 2;
        binary.push(remainder);
    }

    int reverse = 0;
    int size = binary.size();
    for (int i = 0; i < size; i++) {
        reverse += pow(2,i) * binary.top();
        binary.pop();
        // cout << i << endl;
    }

    cout << reverse << endl;;

    return 0;
}
