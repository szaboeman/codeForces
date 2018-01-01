#include <iostream>
#include <string>

using namespace std;

int main() {
    string data;
    cin>>data;
    if (islower(data[0])) {
        data[0]=toupper(data[0]);
    }
    cout<<data;
    return 0;
}
