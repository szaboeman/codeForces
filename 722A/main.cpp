/*Hibás óra javítása*/
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int timeformat;
    cin>>timeformat;
    string data;
    cin>>data;
    stringstream ss(data);
    getline(ss,data,':');
    int hour=stoi(data);
    getline(ss,data,':');
    int min=stoi(data);
    if (timeformat==24 && hour>=24 || timeformat==12 && hour>12) {
        hour=hour%10;
    }
    if (timeformat==12 && hour==0) {
        hour=10;
    }
    if (min>59) {
        min=min%10;
    }
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min;
    return 0;
}
