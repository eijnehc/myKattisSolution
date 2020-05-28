//
//  main.cpp
//  Filip
//
//  Created by Chen Jie on 25/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int flip(int a) {
    int r = 0; //remainder
    
    while (a > 0) {
        r = r*10 + a % 10;
        a = a/10;
    };
    
    return r;
    
};

int main() {
    int num1,num2;
    
    cin >> num1;
    cin >> num2;
    
    if (flip(num1) > flip(num2)) {
        cout << flip(num1) << endl;
    } else
        cout << flip(num2) << endl;
}
