//
//  main.cpp
//  quadrant selection
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int x, y;
    
    cin >> x >> y;
    
    if (x > 0 && y > 0) {
        cout << 1;
    } else if (x < 0 && y > 0) {
        cout << 2;
    } else if (x < 0 && y < 0) {
        cout << 3;
    } else if (x > 0 && y < 0) {
        cout << 4;
    }
    
    return 0;
}
