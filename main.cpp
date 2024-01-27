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
    cout << "What does a goose say? ";
    cin >> userNoise;
    
    StringToLower(userNoise);
    
    while (userNoise != "honk") {
        cout << "You are absolutely incorrect. Please try again.\n";

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