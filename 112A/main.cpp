#include <iostream>
#include <string>

using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int i=0;
    while (i<a.size() && tolower(a[i])==tolower(b[i])) {
        i++;
    }
    if (i==a.size()) {
        cout<<0;
    } else  {
        if (tolower(a[i])<tolower(b[i])) {
            cout<<-1;
        } else {
            cout<<1;
        }
    }
    return 0;
}
