//
//  main.cpp
//  pokerhand
//
//  Created by Chen Jie on 19/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string cards[5];
    int rank = 1, truerank = 1;
    
    
    for (int i = 0; i < 5; i++) {
        cin >> cards[i];
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (cards[i][0] == cards[j][0]) {
                rank++;
            }
        }
        if (truerank < rank)
            truerank = rank;
        rank = 1;
    };
    
    cout << truerank << endl;

}
