/*Tér térkövezése egész térkövekkel*/

#include <iostream>

using namespace std;

int main() {
    unsigned long long int n,m,size;
    cin>>n>>m>>size;
    unsigned long long int res=((n%size==0)?n/size:n/size+1)*((m%size==0)?m/size:m/size+1);
    cout<<res;
    return 0;
}
