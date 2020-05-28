//
//  main.cpp
//  Line Them Up
//
//  Created by Chen Jie on 28/2/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print() {
    
}

int main() {
    int numInputs;
    vector<string> input;
    string name;
    
    cin >> numInputs;
    for (int i = 0; i < numInputs; i++) {
        cin >> name;
        input.push_back(name);
    }
    
    bool increasing = true;
    bool decreasing = true;
  
    for (int j = 0; j < numInputs-1; j++) {
        if (input.at(j) > input.at(j+1)) {
            increasing = false;
        } else if (input.at(j) < input.at(j+1)) {
            decreasing = false;
        };
    };
    
    if (increasing) {
        cout << "INCREASING\n";
    } else if (decreasing) {
        cout << "DECREASING\n";
    } else {
        cout << "NEITHER\n";
    };
    
}
