/* Leghosszabb olyan rész szöveget, amely legalább kétszer szerepel a szövegben!*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    string in;
    cin>>in;
    int max=0;
    for (int i=0; i<in.length()-1; i++) {
        for (int j=1; j<=in.length()-i; j++) {
            string ss=in.substr(i,j);
            if (in.find(ss)!=-1 && in.find(ss)!=in.find(ss,in.find(ss,0)+1) && in.find(ss,in.find(ss,0)+1)!=-1) {
                if (j>max) {max=j;}
            }
        }
    }
    cout<<max;
    return 0;
}
