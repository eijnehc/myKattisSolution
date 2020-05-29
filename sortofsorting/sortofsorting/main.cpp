//
//  main.cpp
//  sortofsorting
//
//  Created by Chen Jie on 30/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 1;
    string line;
    vector<string> names;
    vector<string> print;
    
    cin >> n;
    while (n != 0){
        getline(cin,line);
        for (int i = 0; i < n; i++) {
            getline(cin,line);
            names.push_back(line);
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++){
                if (names[j].at(0) > names[j+1].at(0)) {
                    names[j].swap(names[j+1]);
                } else if (names[j].at(0) == names[j+1].at(0))
                    if (names[j].at(1) > names[j+1].at(1)) {
                        names[j].swap(names[j+1]);
                    }
            }
        };
        
        while (!names.empty()){
            print.push_back(names.back());
            names.pop_back();
        };
        
        while (!print.empty()) {
            cout << print.back() << endl;
            print.pop_back();
        }
        
        cout << endl;
        cin >> n;
    
    };
    return 0;
}
