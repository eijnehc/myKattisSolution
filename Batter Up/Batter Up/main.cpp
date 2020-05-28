//
//  main.cpp
//  Batter Up
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, b;
    double sum = 0, count = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b >= 0) {
            sum += b;
            count++;
        }
    };
    
    cout << sum/count << endl;
    
    return 0;
}
