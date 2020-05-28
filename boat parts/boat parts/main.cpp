//
//  main.cpp
//  boat parts
//
//  Created by Chen Jie on 13/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int p, n, count = 0;
    string part;
    unordered_set<string> boat;
    
    cin >> p >> n;
    
    getline(cin,part);
    for (int i = 0; i < n; i ++) {
        getline(cin,part);
        boat.insert(part);
        count++;
        if (boat.size() == p)
            break;
    };
    
    if (boat.size() == p)
        cout << count << endl;
    else
        cout << "paradox avoided" << endl;
    
    return 0;
}
