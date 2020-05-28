//
//  main.cpp
//  Height
//
//  Created by Chen Jie on 6/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p, n = 0, height;
    vector<int> line;
    
    cin >> p;
    
    for (int i = 0; i < p; i++) {
        int steps = 0;
        cin >> n;
        for (int j = 0; j < 20; j++) {
            cin >> height;
            line.push_back(height);
        }
        
        for (int i = 1; i < 20; i++) {
            int j = i - 1;
            int key = line[i];
            while (j > -1 && line[j] > key) {
                line[j+1] = line[j];
                j--;
                line[j+1] = key;
                steps++;
            }
        }
        
        line.clear();
        
        cout << n << " " << steps << endl;
    }
    
    

    
    return 0;
}
