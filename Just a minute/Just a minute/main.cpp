//
//  main.cpp
//  Just a minute
//
//  Created by Chen Jie on 26/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float real = 0, sl = 0, n, x, y, output;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        real = real + x;
        sl = sl + y;
    };
    
    output = sl/(real*60);
    if (output > 1) {
        cout << fixed << setprecision(9) <<  output << endl;
    } else {
        cout << "measurement error" << endl;
    }
    
    return 0;
}
