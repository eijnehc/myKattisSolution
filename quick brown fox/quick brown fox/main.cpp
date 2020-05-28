//
//  main.cpp
//  quick brown fox
//
//  Created by Chen Jie on 26/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int n;
    string line;
    bool pangram = true;
    bool flag[26] = {false};
    
    cin >> n;
    getline(cin,line);
    for (int i = 0; i < n; i++) {
        getline(cin,line);
        for (int j = 0; j < line.length(); j++) {
            char c = tolower(line[j]);
            if (c >= 'a' && c <= 'z') {
                flag[c - 'a'] = true;
            }
        };
        
        for (int i = 0; i < 26; i++) {
            if (!flag[i]) {
                pangram = false;
                break;
            }
        }
        if (!pangram){
            cout << "missing ";
            for (int i = 0; i < 26; i++) {
                if (!flag[i])
                    cout << char(i+'a');
            }
        } else {
            cout << "pangram";
        }
        
        cout << endl;
        pangram = true;
        for (int i = 0; i < 26; i++) {
            flag[i] = false;
        }
    }
}

