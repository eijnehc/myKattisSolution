//
//  main.cpp
//  Grass Seed Inc.
//
//  Created by Chen Jie on 4/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double c, cost = 0;
    int n;
    
    cin >> c;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        double w, h;
        cin >> w >> h;
        cost += w*h*c;
    };
    
    cout << fixed;
    cout.precision(6);
    cout << cost << endl;
    
    return 0;
}
