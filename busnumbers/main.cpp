#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("busnumbers/sample-busnumbers.in");
    int n, bus;
    bool arr[1000] = {false};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> bus;
        arr[bus-1] = true;
    }

    int start, end, size = 0;
    bool prev = false;
    for (int i = 0; i < 1000; i++) {
        if (arr[i] == true) {
            if (prev == false) {
                start = i + 1;
                size++;
                if (arr[i+1] == true) {
                    prev = true;
                } else {
                    cout << start << " ";
                    size = 0;
                }
            } else { // if prev == true
                end = i + 1;
                if (arr[i+1] == true) {
                    size++;
                } else {
                    if (size == 1) {
                        cout << start << " " << end << " ";
                    } else {
                        cout << start << "-" << end << " ";
                    }
                    size = 0;
                    prev = false;
                }
            }
        }
    }



    return 0;
}
