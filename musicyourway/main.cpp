#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int key;

bool sortRow(const vector<string>& v1, const vector<string>& v2){
        return v1[key] < v2[key];
}

int getKey(vector<string>& header, string command) {
    for (int j = 0; j < header.size(); j++) {
        if (header[j] == command) {
            return j;
        }
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    // ifstream cin("musicyourway/sample-01.in");

    string s;
    getline(cin, s);

    istringstream iss(s);
    string attributes;
    vector<string> header;

    while(iss >> attributes) {
        header.push_back(attributes);
    }

    int n;
    cin >> n;
    vector< vector<string> > matrix;

    getline(cin,s);
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        istringstream iss(s);
        string song;
        vector<string> row; // initialising row
        while (iss >> song) {
            row.push_back(song);
            // cout << song << endl;
        }
        matrix.push_back(row);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string command;
        cin >> command;
        key = getKey(header, command);

        stable_sort(matrix.begin(),matrix.end(),sortRow);

        for (int i = 0; i < header.size(); i++) {
            cout << header[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        if (i != m - 1) {
            cout << endl;
        }

    }

    return 0;
}
