//
//  main.cpp
//  speedlimit
//
//  Created by Chen Jie on 19/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n = 0, d[10] = {};
    int i = 0, j = 0;
    
    while (n != -1) {
        cin >> n;
        
        // intialise the speed, time and distance
        int s[11] = {}, t[11] = {};
        
        for (j = 0; j < n; j++) {
            cin >> s[j+1];
            cin >> t[j+1];
            d[i] = s[j+1] * (t[j+1]-t[j]) + d[i];
        }
        i++;
    };
    
    for (j = 0; j < i-1; j++) {
        cout << d[j] << " " << "miles\n";
    }
    
}
