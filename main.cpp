#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string StringToLower(string& given) {
    string result = "";
    auto size = given.size();
    for (int i = 0; i < size; i++) {
            result += tolower(given.at(i));
    }
    return result;
}

int main() {
    string userNoise;
    string lowerUserNoise;
    cout << "What does a goose say? ";

    do {
        cin >> userNoise;

        lowerUserNoise = StringToLower(userNoise);

        
    } while(lowerUserNoise != "honk");

    cout << "Honky tonky (Not Honk Honk)" << endl;

    return 0;
}