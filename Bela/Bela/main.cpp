//
//  main.cpp
//  Bela
//
//  Created by Chen Jie on 6/4/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    char b;
    string card;
    
    cin >> n >> b;
    
    for (int i = 0; i < n*4; i++) {
        cin >> card;
        switch (card[0]) {
            case 'A':
                count += 11;
                break;
            case 'K':
                count += 4;
                break;
            case 'Q':
                count += 3;
                break;
            case 'T':
                count += 10;
                break;
            case 'J':
                if (card[1] == b)
                    count += 20;
                else {
                    count += 2;
                };
                break;
            case '9':
                if (card[1] == b)
                    count += 14;
                break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
