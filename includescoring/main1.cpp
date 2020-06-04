#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

struct contestant {
    int id, solved, penalty, last; bool onsite;
    contestant(int _id, int _solved, int _penalty, int _last, bool _onsite):
    id(_id), solved(_solved), penalty(_penalty), last(_last), onsite(_onsite) {};
};

bool cmp(contestant a, contestant b) {
    if (a.solved != b.solved) {
        return a.solved > b.solved;
    } else if (a.penalty != b.penalty) {
        return a.penalty < b.penalty;
    }
    return a.last < b.last;
}

bool equalRank(contestant a, contestant b) {
    return (a.solved == b.solved && a.penalty == b.penalty && a.last == b.last);
}

int score[30] = { 100,75,60,50,45,40,36,32,29,26,24,22,20,18,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
vector<contestant> a;
vector<contestant> buf;
int lastRank = -1;
int answer[1005];
int n;

int getScore(int rank) {
    if (rank >= 30)
        return 0;
    return score[rank];
}

void clearBuf() {
    int sum = 0;
    for (int i = 0; i < buf.size(); i++) {
        lastRank++;
        sum += getScore(lastRank);
    }
    // cout << sum << endl;
    int average = ceil(1.0 * sum / buf.size());
    for (int i = 0; i < buf.size(); i++) {
        answer[buf[i].id] = average + buf[i].onsite;
    }
    buf.clear();
}


int main() {
    ifstream cin("includescoring/2.in");

    cin >> n;
    for (int i = 0; i < n; i++) {
        int solved, penalty, last; bool onsite;
        cin >> solved >> penalty >> last >> onsite;
        a.push_back(contestant(i,solved,penalty,last,onsite));
    }
    sort(a.begin(),a.end(),cmp);
    // for(int i = 0; i < a.size(); i++) {
    //     cout << a[i].solved << endl;
    // }

    for (int i = 0; i < a.size(); i++) {
        if (buf.empty() || !equalRank(buf.back(),a[i])) {
            clearBuf();
        }
        cout << a[i].solved << endl;
        buf.push_back(a[i]);
    }
    clearBuf();
    for (int i = 0; i < n; i++) {
        cout << answer[i] << endl;
    }

    return 0;

}
