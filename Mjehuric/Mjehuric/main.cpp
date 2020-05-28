//
//  main.cpp
//  Mjehuric
//
//  Created by Chen Jie on 27/2/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <vector>
#define INPUTSIZE 5

using namespace std;

void print(vector<int> v) {
    for (int k = 0; k < INPUTSIZE; k++) {
        cout << v.at(k);
        cout << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int mjehuric;
    
    for (int i = 0; i < INPUTSIZE; i++) {
        cin >> mjehuric;
        v.push_back(mjehuric);
    };
    
    
    bool swap = true;
    do {
        swap = false;
        for (int j = 0; j < INPUTSIZE - 1; j++) { // runs through 0th index to 4th index
            if (v.at(j) > v.at(j+1)) {
                swap = true;
                int temp = v.at(j+1);
                v.at(j+1) = v.at(j);
                v.at(j) = temp;
                print(v);
            };
        };
    } while(swap == true);
}
