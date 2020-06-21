#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ifstream cin("spavanac/spavanac.3.in");

    int mm, hh, fullhour;
    cin >> hh >> mm;

    fullhour = (hh * 60 + mm) - 45;
    if (fullhour < 0) {
        fullhour += 1440;
    }
    hh = fullhour / 60;
    mm = fullhour % 60;
    cout << hh << " " << mm << endl;

    return 0;
}
