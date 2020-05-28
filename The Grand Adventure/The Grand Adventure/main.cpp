//
//  main.cpp
//  The Grand Adventure
//
//  Created by Chen Jie on 28/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    string line;
    stack<char> bag;
    bool endEarly = false;
    
    cin >> n;
    getline(cin, line);
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        for (int j = 0; j < line.size(); j++) {
            if (line.at(j) != '.' && endEarly == false) {
                if (line.at(j) == '$' || line.at(j) == '|' || line.at(j) == '*') {
                    bag.push(line.at(j));
                } else if (line.at(j) == 't') {
                    if (!bag.empty()) {
                        if (bag.top() == '|')
                            bag.pop();
                    } else {
                        endEarly = true;
                    }
                } else if (line.at(j) == 'b') {
                    if (!bag.empty()) {
                        if (bag.top() == '$')
                            bag.pop();
                    } else {
                        endEarly = true;
                    }
                } else if (line.at(j) == 'j') {
                    if (!bag.empty()) {
                        if (bag.top() == '*')
                            bag.pop();
                    } else {
                        endEarly = true;
                    }
                }
            }
        };
        
        if (bag.empty() && endEarly == false) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            while (!bag.empty()){
                bag.pop();
            }
            endEarly = false;
        }
    };
    
//    4
//    ........$b...$$..t...*..*...j.........j...
//    .........*****jjjj...............|tj....
//    .$.|.*.$.|.*.$.|.*.j.t.b.j.t.b.j.t.b.
//    ...$$..$$..$$..|..$$..b......b....t..bbbbbb.....j...

    
    
    return 0;
}
