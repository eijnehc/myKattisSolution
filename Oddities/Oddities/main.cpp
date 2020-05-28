//
//  main.cpp
//  Oddities
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, num;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num%2 == 0) {
            cout << num << " is even" << endl;
        } else
            cout << num << " is odd" << endl;
    };
    
    return 0;
}
