/*
Legtöbb pontot elért ember játéközbeni figyelése

3
mike 3
andrew 5
mike 2
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<pair<string, int>> all;
    map<string,int> m,re;
    int n, maxValue=0;
    string max;
    cin>>n;
    for (int i=0; i<n; i++) {
        string name;
        int value;
        cin>>name>>value;
        pair<string,int> sv(name,value);
        all.push_back(sv);
        m[name]+=value;
    }
    for (map<string,int>::iterator i=m.begin(); i!=m.end(); i++) {
        if (i->second>maxValue) {
            maxValue=i->second;
            max=i->first;
        }
    }
    int i=0;
    while (maxValue>m[all[i].first] || re[all[i].first]+all[i].second<maxValue) {
        re[all[i].first]+=all[i].second;
        i++;
    }
    cout<<all[i].first;
    return 0;
}
