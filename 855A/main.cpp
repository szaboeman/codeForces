/*
Melyik elem szerepelt már előtte?
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> s;
    for (int i=0; i<n; i++) {
        string sv;
        cin>>sv;
        if (find(s.begin(),s.end(),sv)==s.end()) {
            cout<<"NO"<<endl;
            s.push_back(sv);
        } else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
