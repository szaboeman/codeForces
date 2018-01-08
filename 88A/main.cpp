/*El kell dönteni, hogy egy akkor major, minor, vagy valami más (strange)*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findIndex(vector<string> a, string element) {
    int i=0;
    while (i<a.size() && a[i]!=element) {
        i++;
    }
    return i;
}

int main() {
    vector<string> a={"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    string x,y,z;
    cin>>x>>y>>z;

    int ar[12] = {} ;

    for(int i = 0 ; i < 12 ; i++)
        if(x == a[i] || y == a[i] || z == a[i])
            ar[i] = 1 ;

    for(int i = 0 ; i < 12 ; i++) {
        if(ar[i]) {
            if(ar[(i+4)%12] && ar[(i+7)%12]) {
                cout << "major";
                return 0;
            }
            if (ar[(i+3)%12]&&ar[(i+7)%12]) {
                cout <<  "minor";
                return 0;
            }
        }
    }
    cout<<"strange";


    return 0 ;
}
