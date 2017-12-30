#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isVowel(char c) {
    vector<char> vowel={'a','e','i','o','u','y'};
    int i=0;
    while (i<vowel.size() && c!=vowel[i]) i++;
    return (i<vowel.size());
}

int main() {
    string data;
    getline(cin,data);
    for (int i=0; i<data.length(); i++) {
        if (!isVowel(tolower(data[i]))) {
            cout<<"."<<(char)tolower(data[i]);
        }
    }
    return 0;
}
