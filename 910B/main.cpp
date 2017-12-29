/*
B. Door Frames
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya has equal wooden bars of length n. He wants to make a frame for two equal doors. Each frame has two vertical (left and right) sides of length a and one top side of length b. A solid (i.e. continuous without breaks) piece of bar is needed for each side.

Determine a minimal number of wooden bars which are needed to make the frames for two doors. Petya can cut the wooden bars into any parts, but each side of each door should be a solid piece of a wooden bar (or a whole wooden bar).

Input
The first line contains a single integer n (1 ≤ n ≤ 1 000) — the length of each wooden bar.

The second line contains a single integer a (1 ≤ a ≤ n) — the length of the vertical (left and right) sides of a door frame.

The third line contains a single integer b (1 ≤ b ≤ n) — the length of the upper side of a door frame.

Output
Print the minimal number of wooden bars with length n which are needed to make the frames for two doors.

Note
In the first example one wooden bar is enough, since the total length of all six sides of the frames for two doors is 8.

In the second example 6 wooden bars is enough, because for each side of the frames the new wooden bar is needed.


*/


/*Szánalmas megoldás... 1-es ide nekem az ellenőrzőmbe...*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,h,w;
    cin>>n>>h>>w;
    int db=1, actN=n;
    pair <int,int> v1(h,4),v2(w,2);
    if (h>w) {
        pair <int,int> sv=v1;
        v1=v2;
        v2=sv;
    }
    while (v1.second+v2.second!=0) {
        int sv1=actN, sv1db=1;
        int sv2=actN, sv2db=1;
        while (v1.second>0 && sv1-v1.first>=0) {
            sv1-=v1.first; sv1db++;
        }
        while (v2.second>0 && sv2-v2.first>=0) {
            sv2-=v2.first; sv2db++;
        }
        if (v2.second>0 && sv1*sv1db>=sv2*sv2db && actN>=v2.first) {
            actN-=v2.first;
            v2.second--;
        } else if (v1.second>0 && sv1*sv1db<=sv2*sv2db && actN>=v1.first) {
            actN-=v1.first;
            v1.second--;
        } else {
            actN=n;
            db++;
        }
    }
    //cout<<db;



    int f1=4,f2=2;
    if (h<w) {
        int sv=h;
        h=w;
        w=sv;
        sv=f1;
        f1=f2;
        f2=sv;
    }
    int db1=1;
    actN=n;
    vector<int> mod;
    for (int i=0; i<f1; i++) {
        if (actN>=h) {
            actN-=h;
        } else {
            mod.push_back(actN);
            actN=n-h;
            db1++;
        }
    }

    int wcount=f2, i=0;
    while (i<mod.size() && wcount>0) {
        if (mod[i]>=w) {
            mod[i]-=w;
            wcount--;
        } else {
            i++;
        }
    }
    if (wcount>0) {
        for (int i=0; i<wcount; i++) {
            if (actN>=w) {
                actN-=w;
            } else {
                actN=n-w;
                db1++;
            }
        }
    }

    cout<<min(db,db1);



    return 0;
}
