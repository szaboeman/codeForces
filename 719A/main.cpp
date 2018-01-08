#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int data;
        cin>>data;
        v.push_back(data);
    }
    //print(v);
    if (v.size()==1) {
        if (v[v.size()-1]==15) cout<<"DOWN";
        else if (v[v.size()-1]==0) cout<<"UP";
        else cout<<-1;
    } else {
        if ((v[v.size()-2]>v[v.size()-1] || v[v.size()-1]==15) && v[v.size()-1]!=0) {
            cout<<"DOWN";
        } else  {
            cout<<"UP";
        }
    }
    return 0;
}
