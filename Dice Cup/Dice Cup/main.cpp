//
//  main.cpp
//  Dice Cup
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n,m,r;

    cin >> n >> m;

    if (n > m)
        r = n-m;
    else
        r = m-n;

    for (int i = 1; i < r+2; i++) {
        if (n > m) {
            cout << m+i << endl;
        } else
            cout << n+i << endl;
    }

    return 0;
}
