//
//  main.cpp
//  FizzBuzz
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int x, y, n;
    
    cin >> x >> y >> n;
    
    for (int i = 1; i < n+1; i++) {
        if (i%x == 0 && i%y == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i%x == 0) {
            cout << "Fizz" << endl;
        } else if (i%y == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    };
    
    
    return 0;
}
