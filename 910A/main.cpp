#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,d;
    string rout;
    cin>>n>>d;
    cin>>rout;
    int ind=0;
    bool isStep=false;
    int step=0;
    while (!isStep) {
        int i=ind+d;
        if (i>=rout.length()-1) i=rout.length()-1;
        while (i>ind && rout[i]=='0') {
            i--;
        }
        if (i>ind) {
            step++;
            ind=i;
        } else {
            isStep=true;
        }
    }
    if (ind>=rout.length()-1) {
        cout<<step;
    } else
    cout<<-1;

    return 0;
}
