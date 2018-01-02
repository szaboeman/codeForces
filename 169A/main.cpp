#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,p,va;
    cin>>n>>va>>p;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int data;
        cin>>data;
        v.push_back(data);
    }
    sort(v.begin(),v.end());
    if (v[p]==v[p-1]) {
        cout<<0;
    } else {
        cout<<v[p]-v[p-1];
    }
    return 0;
}
