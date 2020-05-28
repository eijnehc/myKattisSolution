#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int N, best=235959;
    
    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> input;
        input.erase(remove_if(input.begin(),input.end(), [](const char a_c) { return !isdigit(a_c); }),input.end());
        int time = stoi(input);
        if (time < best) {
            best = time;
        }
    }
        
    string s = to_string(best);
    if (s.size() == 6)
        cout << s[0] << s[1] << ':' << s[2] << s[3] << ':' << s[4] << s[5] << endl;
    else
        cout << 0 << s[0] << ':' << s[1] << s[2] << ':' << s[3] << s[4] << endl;
    
    return 0;
}

