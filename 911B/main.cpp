/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n,a,b;
    cin>>n>>a>>b;
    if (b<a) {
        int sv=a;
        a=b;
        b=sv;
    }
    double atlag=(double)(a+b)/n;
    cout<<atlag<<endl;
    double p1=(a/atlag<1)?1:round(a/atlag);
    double p2=n-p1;

    cout<<a<<" "<<b<<endl;
    cout<<p1<<" "<<p2<<endl;
    cout<<(int)(a/p1)<<" "<<(int)(b/p2)<<endl;

    int moda=a-p1*(int)(a/p1);
    int modb=b-p2*(int)(b/p2);
    cout<<moda<<" "<<modb<<endl;
    if (moda>0) moda=0;
    else if (moda<0) moda=-1;
    if (modb<0) modb=-1;
    else if (modb>0) modb=0;
    cout<<moda<<" "<<modb<<endl;
    cout<<min((int)(a/p1)+moda,(int)(b/p2)+modb);
    return 0;

}
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    while(true) {
    double n,a,b;
    cin>>n>>a>>b;
    if (a<b) {
        double sv=a;
        a=b;
        b=sv;
    }
    cout<<a<<" "<<b<<endl;
    double p2=round((n/(a+b))*b);
    double p1=(n-p2);
    cout<<(p1)<<" "<<(p2)<<endl;
    cout<<(a/p1)<<" "<<(b/p2)<<endl;


    int moda=a-p1*(int)(a/p1);
    int modb=b-p2*(int)(b/p2);

    cout<<moda<<" "<<modb<<endl;
    if (moda>0) moda=0;
    else if (moda<0) moda=-1;
    if (modb<0) modb=-1;
    else if (modb>0) modb=0;
    cout<<moda<<" "<<modb<<endl;
    cout<<min((int)(a/p1)+moda,(int)(b/p2)+modb)<<endl;


    }
    return 0;

}
