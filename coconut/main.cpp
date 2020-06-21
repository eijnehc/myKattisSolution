#include <iostream>
#include <fstream>
#include <vector>
#include <utility>


using namespace std;

int main(int argc, char const *argv[])
{
    ifstream cin("coconut/sample01.in");

    int s, n;

    cin >> s >> n;

    vector< pair<int,int> > player;

    for (int i = 0; i < n; i++) {
        player.push_back(make_pair(i,2)); // player - {index, state(0(folded), 1(Fist), 2, (Palm))}
    }

    int index = 0;

    while (player.size() > 1) {
        index = (index + s - 1) % player.size();
        if (player[index].second == 2) { //palm to 2 fist
            player[index].second = 1;
            player.insert(player.begin() + index, make_pair(player[index].first,1));
        } else if (player[index].second == 1) {
            player[index].second = 0;
            index++;
        } else {
            player.erase(player.begin()+index);
        }
    }

    cout << player[0].first + 1 << endl;

    return 0;
}
