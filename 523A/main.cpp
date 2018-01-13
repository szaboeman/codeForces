/*
Forgatás, tükrözés és szétnyújtás
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v,res;
    int w,h;
    cin>>w>>h;
    for (int i=0; i<h;i++) {
        string row;
        cin>>row;
        v.push_back(row);
    }
    for (int i=0; i<w; i++) {
        string newRow="";
        for (int j=0; j<h; j++) {
            newRow+=v[j][i];
        }
        res.push_back(newRow);
    }
    for (int i=0; i<res.size(); i++) {
        for (int k=0; k<2; k++) {
            for (int j=0; j<res[i].length(); j++) {
                cout<<res[i][j]<<res[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
