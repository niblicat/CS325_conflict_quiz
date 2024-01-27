#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string userNoise;
    cout << "What does a goose say? ";
    cin >> userNoise;
    std::transform(userNoise.begin(), userNoise.end(), userNoise.begin(),
        [](unsigned char c){ return std::tolower(c); });

    while (userNoise != "honk") {
        cout << "You are absolutely incorrect. Please try again.\n";

        cout << "What does a goose say? ";
        cin >> userNoise;
    }

    return 0;
}