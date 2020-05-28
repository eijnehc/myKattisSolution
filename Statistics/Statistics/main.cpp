//
//  main.cpp
//  Statistics
//
//  Created by Chen Jie on 25/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string line;
    int k = 1;
    
    while (getline(cin, line) && !line.empty()) {
        istringstream iss(line);
        int n, min = 0, max = 0, x;
        iss >> n >> x;
        min = x;
        max = x;
        for (int i = 0; i < n - 1; i++) {
            iss >> x;
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
        cout << "Case " << k << ": " << min << " " << max << " " << max-min << endl;
        k++;
    };
    
    return 0;
}
