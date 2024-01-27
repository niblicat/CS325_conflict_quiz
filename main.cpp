#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

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