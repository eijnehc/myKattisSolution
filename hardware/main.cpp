#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]) {
    // ifstream cin("hardware/1.in");

    int n;

    string roadName, address, checker;
    int total, init, start, end, interval;

    cin >> n;
    for (int i = 0; i < n; i++) {
        map<int,int> table;
        for (int i = 0; i < 10; i++) {
            table[i] = 0;
        }

        cin.ignore();
        getline(cin,roadName);
        cin >> total >> address;
        init = total;

        while (total) {
            cin >> checker;
            if (checker[0] == '+') {
                cin >> start >> end >> interval;
                // cout << start << end << interval << endl;
                for (int i = start; i <= end; i+=interval) {
                    int temp = i;
                    // cout << i << endl;
                    while (temp > 0) {
                        int r = temp % 10;
                        table[r]++;
                        temp = temp/10;
                    }
                    total--;
                }
            } else {
                int num = stoi(checker);
                while (num > 0) {
                    int r = num % 10;
                    table[r]++;
                    num /= 10;
                }
                total--;
            }
        }
        cout << roadName << endl;
        cout << init << " " << address << endl;
        int sum = 0;
        for (auto &it : table) {
            sum += it.second;
            cout << "Make " << it.second << " digit " << it.first << endl;
        }
        if (sum == 1) {
            cout << "In total " << sum << " digit" << endl;
        } else {
            cout << "In total " << sum << " digits" << endl;
        }
    }
    return 0;
}
