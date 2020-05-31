#include <iostream>
#include <fstream>

using namespace std;

void swap(char& a, char& b) {
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[]) {
    ifstream cin("chartingprogress/sample.in");

    string log;
    int total = 0;
    int count = 0;
    int len = 0;

    while(getline(cin,log)) {
        if (log.empty()) {
            total = 0;
            cout << endl;
        } else {
            count = 0;
            for (int i = 0; i < log.size(); i++) {
                if (log[i] == '*') {
                    count++;
                }
            }

            len = log.size();

            cout << string(len - count - total ,'.') << string(count,'*') << string(total,'.') << endl;

            total += count;
        }
    }

    return 0;
}
