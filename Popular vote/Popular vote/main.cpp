//
//  main.cpp
//  Popular vote
//
//  Created by Chen Jie on 26/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <fstream>


using namespace std;

int main() {
    // t - testcase, n -  number of candidates, v - votes
    // freopen("vote-01.in","r",stdin);

    ifstream cin("vote-01.in");
    // ofstream cout("vote-01.out");

    int t,n,v;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int sum = 0;
        int candidate = 0;
        int max = 0;
        for (int j = 0; j < n; j++) {
            cin >> v;
            sum += v;
            if (v > max) {
                max = v;
                candidate = j + 1;
            } else if (v == max) {
                candidate = 0;
            }
        }

        if (candidate == 0) {
            cout << "no winner"<< endl;
        } else if (2*max > sum) {
            cout << "majority winner " << candidate << endl;
        } else
            cout << "minority winner " << candidate << endl;

    }


    return 0;
}
