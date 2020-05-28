//
//  main.cpp
//  sideways sorting
//
//  Created by Chen Jie on 6/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparison (string i, string j) {
    for (auto &it : i) {
        it = tolower(it);
    }
    for (auto &it : j) {
        it = tolower(it);
    }
    return i < j;
}

int main() {
    int r, c;
    char word;

    while (cin >> r >> c && r!=0 && c!=0) {
        vector<string> array;
        array.resize(c,"");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> word;
                array[j].push_back(word);
            }
        }
    
        stable_sort(array.begin(),array.end(),comparison);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << array[j][i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
