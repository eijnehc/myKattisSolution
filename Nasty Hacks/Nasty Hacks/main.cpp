//
//  main.cpp
//  Nasty Hacks
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, r, e, c, profit;
    
    cin >> n;
    
    
    for (int i = 0; i < n; i++) {
        cin >> r >> e >> c;
        profit = e - c;
        if (r < profit) {
            cout << "advertise" << endl;
        } else if (r == profit) {
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    };
    return 0;
}
