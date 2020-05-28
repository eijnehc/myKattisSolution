//
//  main.cpp
//  Faktor
//
//  Created by Chen Jie on 19/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int articles, impactFactor;
    cin >> articles;
    cin  >> impactFactor;
    
    cout << articles * impactFactor - (articles - 1) << endl;
}
