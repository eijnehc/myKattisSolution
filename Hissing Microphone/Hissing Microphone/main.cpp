//
//  main.cpp
//  Hissing Microphone
//
//  Created by Chen Jie on 29/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string line;
    bool hissing = false;
    
    getline(cin, line);
    
    for (int i = 0; i < line.length()-1; i++) {
        if (line.at(i) == 's') {
            if (line.at(i+1) == 's')
                hissing = true;
        }
    };
    
    if (hissing)
        cout << "hiss" << endl;
    else
        cout << "no hiss" << endl;
    
    return 0;
}
