#include <iostream>
#include <string>

using namespace std;

int main() {
    string data;
    int sum=0;
    cin>>data;
    for (int i=0; i<data.length(); i++) {
        sum+=(data[i]=='1')?1:-1;
    }
    cout<<sum<<endl;
    if (sum<7) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
