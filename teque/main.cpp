#include <iostream>
#include <fstream>
#include <deque>

using namespace std;

void rebalance(deque<int>& firstHalf, deque<int>& secondHalf) {
    if ((int)firstHalf.size() - (int)secondHalf.size() > 1) {
        // cout << (int)firstHalf.size() - (int)secondHalf.size() << endl;
        secondHalf.push_front(firstHalf.back());
        firstHalf.pop_back();
    } else if ((int)secondHalf.size() - (int)firstHalf.size() >= 1) {
        // cout << (int)secondHalf.size() - (int)firstHalf.size() << endl;
        firstHalf.push_back(secondHalf.front());
        secondHalf.pop_front();
    } else {
        // cout << "Hi" << endl;
        // if firstHalf and secondHalf are equal or off by one
        // cout << (int)secondHalf.size() - (int)firstHalf.size() << endl;
        return;
    }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);
    // ifstream cin("teque/1.in");

    int n, element;
    string input;
    cin >> n;

    deque<int> firstHalf;
    deque<int> secondHalf;

    for (int i = 0; i < n; i++) {
        cin >> input >> element;
        // cout << input << " " << element << endl;
        if (input == "push_back") {
            secondHalf.push_back(element);
            rebalance(firstHalf, secondHalf);
            // secondHalf.push_back(element);
            // if (secondHalf.size() > firstHalf.size()) {
            //     firstHalf.push_back(secondHalf.front());
            //     secondHalf.pop_front();
            // }
        } else if (input == "push_front") {
            firstHalf.push_front(element);
            rebalance(firstHalf, secondHalf);
            // if (firstHalf.size() > secondHalf.size() + 1) {
            //     secondHalf.push_front(firstHalf.back());
            //     firstHalf.pop_back();
            // }

        } else if (input == "push_middle") {
            firstHalf.push_back(element);
            rebalance(firstHalf, secondHalf);
            // secondHalf.push_front(element);
            // if (secondHalf.size() > firstHalf.size()) {
            //     firstHalf.push_back(secondHalf.front());
            //     secondHalf.pop_front();
            // }
        } else {
            int index = element;
            if (index < firstHalf.size()) { //
                cout << firstHalf[index] << endl;
            } else {
                cout << secondHalf[index - firstHalf.size()] << endl;
            }
        }
    }

    return 0;
}
