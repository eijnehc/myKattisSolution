//
//  main.cpp
//  fast food prizes
//
//  Created by Chen Jie on 26/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,m; // n is the number of different types of prizes and 𝑚 is the number of different types of stickers
        cin >> n >> m;
        
        int types[30][30] = {};
        int prize[30] = {};
        int stickers[30][30] = {};
        int k[30] = {};//the number of sticker types required to claim the prize
        int sum = 0;
        
        for (int j = 0; j < n; j++) {
            cin >> k[j];
            for (int l = 0; l < k[j]; l++) {
                cin >> types[j][l];
            };
            cin >> prize[j];
        };
        
        for (int i = 0; i < m; i++) {
            stickers[0][i] = i+1;
            cin >> stickers[1][i];
        };
        
        bool repeat = true;
        for (int j = 0; j < n; j++) {
            while (repeat) {
                for (int i = 0; i < k[j]; i++) {
                    for (int x = 0; x < m; x++)
                    if (types[j][i] == stickers[0][x]) {
                        if (stickers[1][x] > 0)
                            stickers[1][x]--;
                        else {
                            repeat = false;
                        }
                    }
                }
                if (repeat)
                    sum += prize[j];
            }
            repeat = true;
        }
        cout << sum << endl;
    };
    
    return 0;
}
