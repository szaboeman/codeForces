/*
 * Szerencsés számjegyekből álló számról van-e szó (csak 4 és 7)
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    if (n%4!=0 && n%7!=0 && n%47!=0  && n%477!=0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
