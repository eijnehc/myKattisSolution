//
//  main.cpp
//  Heart_Rate
//
//  Created by Chen Jie on 4/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    double b, p, bpm, var;
    
    cin >> n;
    
    
    for (int i = 0; i < n; i++) {
        cin >> b >> p;
        
        bpm = 60 * b /p;
        var = bpm / b;
        
        cout << fixed;
        cout.precision(4);
        cout << bpm - var << " " << bpm << " " << bpm + var  << endl;
        
    };
    
    return 0;
}
