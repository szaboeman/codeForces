/*
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
input
5
1 2 4 3 3
output
4
input
8
2 3 4 4 2 1 3 1
output
5
Note
In the first test we can sort the children into four cars like this:

the third group (consisting of four children),
the fourth group (consisting of three children),
the fifth group (consisting of three children),
the first and the second group (consisting of one and two children, correspondingly).
There are other ways to sort the groups into four cars.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int sv;
        cin>>sv;
        v.push_back(sv);
    }
    int db[4]={0,0,0,0};
    for (int i=0; i<v.size(); i++) {
        db[v[i]-1]++;
    }

    int tdb=0;
    tdb=tdb+db[3];
    if (db[0]>db[2]) {
        tdb=tdb+db[2];
        db[0]=db[0]-db[2];
        db[2]=0;
    } else {
        tdb=tdb+db[0];
        db[2]=db[2]-db[0];
        db[0]=0;
    }
    tdb=tdb+db[2];
    tdb=tdb+db[1]/2;
    db[1]=db[1]%2;
    if (db[1]==1) {
        if (db[0]>=2) {
            tdb++;
            db[0]-=2;
        } else {
            tdb++;
            db[0]=0;
        }
    }
    if (db[0]%4==0) {
        tdb+=db[0]/4;
    } else {
        tdb+=db[0]/4+1;
    }
    cout<<tdb;

    return 0;
}
