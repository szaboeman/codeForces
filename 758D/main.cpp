#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    unsigned long long int sysBase;
    unsigned long long int answer=0;
    string numb,sb;
    cin>>sb>>numb;
    sysBase=stoi(sb);
    int i=numb.length()-1, exp=0;
    while (i>=0) {
        int len=1;
        while (i>=1 && len<=sb.length() && stoull(numb.substr(i-1,len+1))<sysBase) {
            len++; i--;
        }
        while (numb[i]=='0' && len>1) {
            len--; i++;
        }
        //cout<<stoi(numb.substr(i,len))<<" "<<setprecision(20)<<stoull(numb.substr(i,len))*pow(sysBase,exp)<<endl;
        answer=answer+stoull(numb.substr(i,len))*(unsigned long long int)pow(sysBase,exp);
        numb=numb.substr(0,numb.length()-len);
        i=numb.length()-1;
        exp++;
    }
    cout<<answer;

    return 0;
}
