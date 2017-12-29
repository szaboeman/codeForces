#include <iostream>
#include <cmath>
using namespace std;

int getMin(int a, int b, int p1, int p2) {

    if (p2==0) {
        return 0;
    } else {
        int moda=a-p1*(int)(a/p1);
        int modb=b-p2*(int)(b/p2);

        if (moda>0) moda=0; else if (moda<0) moda=-1;
        if (modb<0) modb=-1; else if (modb>0) modb=0;
        return min((int)(a/p1)+moda,(int)(b/p2)+modb);
    }
}

int main() {
    double n,a,b;
    cin>>n>>a>>b;
    if (a<b) {
        double sv=a;
        a=b;
        b=sv;
    }

    int v1=getMin(a,b,n-ceil((n/(a+b))*b),ceil((n/(a+b))*b));
    int v2=getMin(a,b,n-floor((n/(a+b))*b),floor((n/(a+b))*b));

    cout<<max(v1,v2);

    return 0;

}
