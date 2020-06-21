#include <iostream>
#include <fstream>
#include <deque>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream cin("foosball/001.in");

    int n;
    cin >> n;

    deque<string> white, black, waiting;
    string player, score;
    for (int i = 0; i < n; i++) {
        cin >> player;
        if (i < 4 && i % 2 == 0) {
            white.push_back(player);
        } else if (i < 4 && i % 2 > 0) {
            black.push_back(player);
        } else {
            waiting.push_back(player);
        }
    }

    cin >> score;
    unordered_map<int, pair<string,string>> dynasty;
    for (int i = 0; i < score.length(); i++) {
        if (score[i] == 'W') {

            white.push_back(white.front());
            white.pop_front();

            waiting.push_back(black.back());
            black.pop_back();
            black.push_front(waiting.front());
        } else {
            black.push_back(black.front());
            black.pop_front();

            waiting.push_back(white.back());
            white.pop_back();
            white.push_front(waiting.front());
        }
        // prev = score[i];

    }

    return 0;
}
