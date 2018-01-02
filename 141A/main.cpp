#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a,b, res;
    cin>>a>>b>>res;
    a=a+b;
    sort(a.begin(), a.end());
    sort(res.begin(), res.end());
    cout<<((a==res)?"YES":"NO");
    return 0;
}
