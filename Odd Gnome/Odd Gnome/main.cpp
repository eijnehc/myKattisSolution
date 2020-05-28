//
//  main.cpp
//  Odd Gnome
//
//  Created by Chen Jie on 20/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n,x;
    int g, p;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int k = 0;
        cin >> g >> p;
        for (int j = 1; j < g; j++) {
            cin >> x;
            if (!k && x != ++p) {
                k = j + 1;
            };
        }
        cout << k << endl;
    };

    return 0;
}
