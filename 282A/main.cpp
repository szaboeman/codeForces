#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, x=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        string data;
        cin>>data;
        if (data[0]=='X') {
            if (data[data.size()-1]=='+') {
                x++;
            } else {
                x--;
            }
        } else {
            if (data[0]=='+') {
                x++;
            } else {
                x--;
            }
        }
    }
    cout<<x;
    return 0;
}
