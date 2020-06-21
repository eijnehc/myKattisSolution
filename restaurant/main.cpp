#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
    // ifstream cin("restaurant/sample.in");

    int orders;
    cin >> orders;
    while (orders) {
        int pile1 = 0, pile2 = 0;

        for (int i = 0; i < orders; i++) {
            string command;
            int plates;
            cin >> command >> plates;
            if (command == "DROP") {
                pile2 += plates;
                cout << "DROP 2 " << plates << endl;
            } else {
                if (pile1 >= plates) {
                    pile1 -= plates;
                    cout << "TAKE 1 " << plates << endl;
                } else {
                    if (pile1 != 0) {
                        cout << "TAKE 1 " << pile1 << endl;
                        plates -= pile1;
                        pile1 = 0;
                    }
                    cout << "MOVE 2->1 " << pile2 << endl;
                    pile1 = pile2 - plates;
                    pile2 = 0;
                    cout << "TAKE 1 " << plates << endl;
                }
            }
        }
        cin >> orders;
        if (orders) {
            cout << endl;
        }
    }

    return 0;
}
