//
//  main.cpp
//  Game of Throwns
//
//  Created by Chen Jie on 9/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, k;
    string p;
    stack<int> position;
    
    cin >> n >> k;
    position.push(0);
    
    while (k > 0) {
        int m;
        cin >> p;
        
        if (p == "undo") {
            cin >> p;
            m = stoi(p);
            while (m > 0) {
                position.pop();
                m--;
            };
        } else {
            m = stoi(p);
            position.push((position.top() + m) % n);
        };
        k--;
        
    };
    if (position.top() < 0)
        position.top() = position.top() + n;
    cout << position.top() << endl;
    
    return 0;
}
