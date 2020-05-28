//
//  main.cpp
//  Autori
//
//  Created by Chen Jie on 25/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream> //std::cout
#include <string> //std::string

using namespace std;

int main() {
    string input;

    cin >> input;

    cout << input[0];

    for (int i = 1; i < input.size(); i++) {
        if (input[i] == '-') {
            cout << input[i+1];
        };
    };

    cout << endl;
}
