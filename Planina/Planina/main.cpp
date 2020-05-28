//
//  main.cpp
//  Planina
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, side = 2;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        side = side * 2 - 1;
    };
    
    cout << side * side << endl;
    
    
    return 0;
}
