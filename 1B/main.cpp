/*
sor-oszlop érték megjelenítése excel formában illetve vissza
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

bool isdigit(char d) {
    return (d>=48 &&  d<=57);
}

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string data;
        cin>>data;
        vector<string> arr;
        int j=0;
        while (j<data.length()) {
            string sv="";
            while (j<data.length() && !isdigit(data[j])) {
                sv+=data[j];
                j++;
            }
            arr.push_back(sv);
            sv="";
            while (j<data.length() && isdigit(data[j])) {
                sv+=data[j];
                j++;
            }
            arr.push_back(sv);
        }
        if (arr.size()==2) {
            cout<<"R"<<arr[1]<<"C";
            int col=0;
            for (int i=0; i<arr[0].length(); i++) {
                col+=((int)arr[0][i]-65+1)*pow(26,arr[0].length()-i-1);
            }
            cout<<col<<endl;
        } else {
            string sv="";
            int col=stoi(arr[3]);
            int maradek=0;
            while (col!=0) {
                int c=col%26+65-1;
                if (c<65) {
                    c+=26; col--;
                }
                sv+=(char)(c);
                col/=26;
            }
            reverse(sv.begin(), sv.end());
            cout<<sv<<arr[1]<<endl;
        }
    }
    return 0;
}
