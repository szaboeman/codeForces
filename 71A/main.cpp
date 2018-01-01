#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string data;
        cin>>data;
        if (data.length()>10) {
            cout<<data[0]<<data.length()-2<<data[data.length()-1]<<endl;
        } else {
            cout<<data<<endl;
        }

    }
    return 0;
}
