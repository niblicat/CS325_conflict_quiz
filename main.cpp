#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void StringToLower(string& given) {
    std::transform(given.begin(), given.end(), given.begin(),
        [](unsigned char c){ return std::tolower(c); });
}

int main() {
    string userNoise;
    string lowerUserNoise;
    cout << "What does a goose say? " << endl;

    do {
        cin >> userNoise;

        lowerUserNoise = "";

        for(int i = 0; i < userNoise.size(); i++) {
            lowerUserNoise += tolower(userNoise.at(i));
        }
    } while(lowerUserNoise != "honk");

    cout << "Honk honk" << endl;


    return 0;
}