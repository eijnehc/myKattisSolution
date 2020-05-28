//
//  main.cpp
//  solving for carrots
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, p;
    string line;
    
    cin >> n >> p;
    
    for (int i=0; i < n; i++) {
        getline(cin,line);
    };
    
    cout << p << endl;

    return 0;
}
