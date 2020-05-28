//
//  main.cpp
//  Preludes
//
//  Created by Chen Jie on 19/3/20.
//  Copyright © 2020 Chen Jie. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int cases = 0;
    vector <string> input;
    string line;

    while (getline(cin, line) && !line.empty()) {
        input.push_back(line);
        cases++;
    }

    for (int i = 0; i < cases; i++) {
        if (input[i].at(1) == ' ') {
           input[i] = "UNIQUE";
        } else if (input[i].at(0) == 'A') {
            if (input[i].at(1) == '#') {
                input[i].at(0) = 'B';
                input[i].at(1) = 'b';
            } else if (input[i].at(1) == 'b') {
                  input[i].at(0) = 'G';
                  input[i].at(1) = '#';
            }
        } else if (input[i].at(0) == 'B') {
            if (input[i].at(1) == 'b') {
                input[i].at(0) = 'A';
                input[i].at(1) = '#';
            }
        } else if (input[i].at(0) == 'C') {
            if (input[i].at(1) == '#') {
                input[i].at(0) = 'D';
                input[i].at(1) = 'b';
            }
        } else if (input[i].at(0) == 'D') {
            if (input[i].at(1) == '#') {
                input[i].at(0) = 'E';
                input[i].at(1) = 'b';
            } else if (input[i].at(1) == 'b') {
                input[i].at(0) = 'C';
                input[i].at(1) = '#';
            }
        } else if (input[i].at(0) == 'E') {
            if (input[i].at(1) == 'b') {
                input[i].at(0) = 'D';
                input[i].at(1) = '#';
            }
        } else if (input[i].at(0) == 'F') {
            if (input[i].at(1) == '#') {
                input[i].at(0) = 'G';
                input[i].at(1) = 'b';
            }
        } else if (input[i].at(0) == 'G') {
            if (input[i].at(1) == '#') {
                input[i].at(0) = 'A';
                input[i].at(1) = 'b';
            } else if (input[i].at(1) == 'b') {
                input[i].at(0) = 'F';
                input[i].at(1) = '#';
            }
        }
    };

    for (int i = 0; i < cases; i++) {
        cout << "Case " << i+1 << ": " << input[i] << endl;
    };

    return 0;
}
