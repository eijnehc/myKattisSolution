#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

bool sameRank = false;

bool sortcol(const vector<int>& v1, const vector<int>& v2) {
    /* ranked first on the number of problems they solve (in descending order) */
    if (v1[0] > v2[0])
        return true;
    if (v1[0] < v2[0])
        return false;

    /* secondly on their time penalty (in ascending order) */
    if (v1[1] < v2[1])
        return true;
    if (v1[1] > v2[1])
        return false;

    /* the time at which they submitted their last accepted solution in minutes (in ascending order) */
    if (v1[2] < v2[2])
        return true;
    if (v1[2] > v2[2])
        return false;

   return false;
}

void compScore(vector<int>& curr, vector<int>& next, vector<int>& prev, int& rank, int i) {
    sameRank = false;
    if (curr[0] == next[0] && curr[1] == next[1] && curr[2] == next[2]) {
        sameRank = true;
        if (prev[0] != next[0] || prev[1] != next[1] || prev[2] != next[2] || i == 0) { //if prev not equal to next iteration or index at the strart
            rank += 1;
        }
    }

    prev = curr;
}

int answer[1005];

int main(int argc, char const *argv[])
{
    ifstream cin("includescoring/2.in");

    map<int, int> scoreTable;
    scoreTable[1] = 100;
    scoreTable[2] = 75;
    scoreTable[3] = 60;
    scoreTable[4] = 50;
    scoreTable[5] = 45;
    scoreTable[6] = 40;
    scoreTable[7] = 36;
    scoreTable[8] = 32;
    scoreTable[9] = 29;
    scoreTable[10] = 26;
    scoreTable[11] = 24;
    scoreTable[12] = 22;
    scoreTable[13] = 20;
    scoreTable[14] = 18;
    scoreTable[15] = 16;
    scoreTable[16] = 15;
    scoreTable[17] = 14;
    scoreTable[18] = 13;
    scoreTable[19] = 12;
    scoreTable[20] = 11;
    scoreTable[21] = 10;
    scoreTable[22] = 9;
    scoreTable[23] = 8;
    scoreTable[24] = 7;
    scoreTable[25] = 6;
    scoreTable[26] = 5;
    scoreTable[27] = 4;
    scoreTable[28] = 3;
    scoreTable[29] = 2;
    scoreTable[30] = 1;

    int n;
    cin >> n;

    vector< vector<int> > score;
    for (int i = 0; i < n; i++) {
        vector<int> row;
        int s, f, o;
        long int p;
        cin >> s >> p >> f >> o;
        row.push_back(s);
        row.push_back(p);
        row.push_back(f);
        row.push_back(o);
        row.push_back(sameRank);
        score.push_back(row);
    }

    int rank = 0;
    sort(score.begin(),score.end(),sortcol);
    vector<int>prev = score[0];
    for (int i = 0; i < n - 1; i++) {
        compScore(score[i],score[i+1],prev,rank,i);
        if (sameRank) {
            score[i][4] = rank;
            score[i+1][4] = rank;
        }
    }

    for (int i = 0; i < score.size(); i++) {
        for (int j = 0; j < score[i].size(); j++) {
            cout << score[i][j] << " ";
        }
        cout << endl;
    }

    int count = 1;
    for (int i = 0; i < score.size(); i++) {
        // cout << i << endl;
        if (i < scoreTable.size() && score[i][2] != 0) { // less than 30
            if (score[i][4] == count) {
                int j = i;
                double k = 0, sum = 0;
                while (score[j][4] == count ) { //&& j < scoreTable.size()
                    sum += scoreTable[j+1];
                    // cout << scoreTable[j+1] << endl;
                    k++;
                    j++;
                    if (j == n) {
                        break;
                    }
                }
                // cout << sum << endl;

                int average = ceil(sum/k);

                for (int m = 0; m < k; m++) {
                    answer[i+m] = average + score[i+m][3];
                }
                i += k - 1;
                // cout << i << endl;
                count++;
            } else {
                answer[i] = scoreTable[i+1] + score[i][3];
            }
        } else
            if (score[i][2] != 0)
                answer[i] =  0 + score[i][3];
            else
                answer[i] =  0;
    }

    for (int i =0; i < score.size(); i++) {
        cout << answer[i] << endl;
    }

    return 0;
}
