#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    string data;
    cin>>data;
    stringstream ss(data);
    while (getline(ss,data,',')) {
        v.push_back(stoi(data));
    }
    sort(v.begin(),v.end());
    int i=0;
    while (i<v.size()) {
        while (i<v.size()-1 && v[i]==v[i+1]) {
            v.erase(v.begin()+i);
        }
        i++;
    }
    i=0;
    string answer="";
    while (i<v.size()) {
        int start=v[i];
        int count=0;
        do {
            i++;
            count++;
        } while (i<v.size() && v[i]-1==v[i-1]);
        if (count>1) {
            answer+=to_string(start)+"-"+to_string(v[i-1])+",";
        } else {
            answer+=to_string(start)+",";
        }
    }
    answer=answer.substr(0,answer.length()-1);
    cout<<answer;
    return 0;
}
