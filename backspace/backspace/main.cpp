//
//  main.cpp
//  backspace
//
//  Created by Chen Jie on 26/2/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> s;
    stack<char> print;
    string  input;
    
    getline(cin,input);
    for (int i = 0; i < input.size(); i++) {
        (input.at(i) == '<' ? s.pop() : s.push(input.at(i)));
    }
    
    // print
    while (!s.empty()) {
        print.emplace(s.top());
        s.pop();
    }
    
    while(!print.empty()) {
        cout << print.top();
        print.pop();
    }
    cout << endl;
}
