//
//  main.cpp
//  Pot
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sum = 0, num,r;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        r = num%10;
        num = num/10;
        sum += pow(num,r);
    }
    
    cout << sum << endl;
    
    return 0;
}
