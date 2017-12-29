#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n,data, min=9999999999;
    vector<int> v;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>data;
        if (data<min) {
            min=data;
            v.clear();
            v.push_back(i);
        } else if (data==min){
            v.push_back(i);
        }


    }
    int minDis=9999999999;
    for (int i=0; i<v.size()-1; i++) {
        if (minDis>v[i+1]-v[i]) minDis=v[i+1]-v[i];
    }
    cout<<minDis;



    return 0;
}
