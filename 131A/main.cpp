#include <iostream>
#include <string>

using namespace std;

int main() {
    string data;
    cin>>data;
    int i=1;
    while (i<data.length() && isupper(data[i])) {
        i++;
    }
    if (i<data.length()) {
        cout<<data;
    } else {
        for (int i=0; i<data.length(); i++) {
            if (isupper(data[i])) {
                cout<<(char)tolower(data[i]);
            } else {
                cout<<(char)toupper(data[i]);
            }
        }
    }
    return 0;
}
