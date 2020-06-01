#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmpstr(string a, string b) {
    return a.size() < b.size();
}

int main(int argc, char const *argv[])
{
    // ifstream cin("dyslectionary/sample.in");

    string input;
    vector< vector<string> > v;
    vector<string> row;

    while(getline(cin,input)) {
        if (!input.empty()) {
            reverse(input.begin(),input.end());
            row.push_back(input);
            // cout << input << endl;
        }
        else {
            v.push_back(row);
            row.clear();
        }
    }
    v.push_back(row);

    for (int i = 0; i < v.size(); i++) {
        sort(v[i].begin(),v[i].end()); // sort the strings
        string max = *max_element(v[i].begin(),v[i].end(),cmpstr); // find the longest string in each row
        int maxLength = max.size();

        int spacing;
        // cout << v[i].size() << endl;
        for (int j = 0; j < v[i].size(); j++) {
            reverse(v[i][j].begin(),v[i][j].end());
            spacing = maxLength - v[i][j].size();
            cout << string(spacing, ' ') << v[i][j];
            cout << endl;
        }

        if (i != v.size() - 1)  {
            cout << endl;
        }
    }

    return 0;
}
