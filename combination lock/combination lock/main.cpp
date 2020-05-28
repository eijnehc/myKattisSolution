//
//  main.cpp
//  combination lock
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int initial, first, second, third, degrees = 0;
    bool exception = false;
    
    while (cin) {
        cin >> initial;
        cin >> first >> second >> third;
        
        if (!initial && !first && !second && !third) {
            exception = true;
        }
        // step 1
        degrees = 40 * 2; // 2 turns
        // Stop at the first number of the combination
        if (first > initial) {
            degrees = degrees + initial;
            degrees = degrees - 1 * (first - 40);
        } else {
            degrees = degrees - first + initial;
        }
        
        // step 2
        degrees = degrees + 40; // 1 turn
        // turn acw until second number is reached
        if (first > second) {
            degrees = degrees + 40 - first;
            degrees = degrees + second;
        } else {
            degrees = degrees + second - first;
        };
        
        // step 3
        // Stop at the third number of the combination
        if (third > second) {
            degrees = degrees + second;
            degrees = degrees - 1 * (third - 40);
        } else {
            degrees = degrees - third + second;
        }
        
        if (exception) {
            break;
        } else {
            cout << degrees * 9 << endl;
        }
    };
    
    return 0;
}
