/*
Ismétléses variáció 7,8 elemekből: n elemű halmazok képzés
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    unsigned long long int res=0;
    cin>>n;
    cout<<pow(2,n+1)-2;
    return 0;
}
