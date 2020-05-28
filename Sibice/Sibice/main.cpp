//
//  main.cpp
//  Sibice
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, w, h, match, hyp;
    
    cin >> n >> w >> h;
    
    hyp = sqrt(w*w + h*h);
    
    for (int i = 0; i < n; i++) {
        cin >> match;
        if (match <= hyp) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    };
    
    
    return 0;
}
