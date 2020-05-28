//
//  main.cpp
//  compound words
//
//  Created by Chen Jie on 13/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main() {
    string words;
    unordered_set<string> in; // store in a hash table for for 0(1) performance
    set<string> compound; // balanced bst 0(log n) performance, as we need the output to be sorted
    
    while (cin >> words) { // press ctrl+d tells the terminal application that you're at the end of your input
        in.insert(words);
    }
    
    for (auto i : in) { // range base for loops
        for (auto j : in) {
            if (i == j)
                continue; // if the two string are equal, ignore
            compound.insert(i+j); // concatenate
            compound.insert(j+i); // remember the opposite too and set will store them in order
        }
    }
    
    for (auto it : compound)
        cout << it << endl;
    
    return 0;
}
