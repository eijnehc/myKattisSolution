//
//  main.cpp
//  Trifa
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int x, n, p, extra = 0;
    
    cin >> x >> n;
    extra = x;
    
    for (int i = 0; i < n ; i++) {
        cin >> p;
        if (p <= extra)
            extra += x-p;
    };
    
    cout << extra << endl;
    
    
    return 0;
}
