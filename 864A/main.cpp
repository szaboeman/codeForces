#include <iostream>
#include <map>
#include <vector>

using namespace std;
typedef map<int,int>::iterator mapIterate;
int main() {
    int n;
    map<int,int> m;
    cin>>n;
    for (int i=0; i<n; i++) {
        int data;
        cin>>data;
        m[data]++;
    }
    /*map<int,int>::iterator it=m.begin();
    for (it=m.begin(); it!=m.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    if (m.size()!=2) {
        cout<<"NO";
    } else {
        mapIterate i;
        vector<int> ind;
        for (i=m.begin(); i!=m.end(); i++) {
            int count=0;
            ind.clear();
            for (mapIterate j=m.begin(); j!=m.end(); j++) {
                if (i->second==j->second) {
                    ind.push_back(j->first);
                }
            }
            if (ind.size()>=2) {
                break;
            }
        }
        if (i!=m.end()) {
            cout<<"YES"<<endl;
            cout<<ind[0]<<" "<<ind[1]<<endl;
        } else {
            cout<<"NO";
        }
    }
    return 0;
}
