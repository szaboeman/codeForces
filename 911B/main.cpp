#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n,a,b;
    cin>>n>>a>>b;
    if (b<a) {
        int sv=a;
        a=b;
        b=sv;
    }
    double atlag=(double)(a+b)/n;
    int p1=((int)a/atlag==0)?1:ceil(a/atlag);
    int p2=n-p1;
    cout<<min(ceil(a/p1),ceil(b/p2));
    return 0;
}
