#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool twoPow(int k) {
    while (k%2==0) {
        k=k/2;
    }
    return (k==1);
}

void print(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        //cout<<v[i]<<"-"<<(v[i]&(i+1))<<" ";
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> onlyNull={2, 1};
    vector<int> onlyNotNull={3,6,1,5,4,2};
    if (n%2==1) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        for (int i=onlyNull.size()+1; i<=n; i+=2) {
            int ins1=i+1, ins2=i; bool isEnd=false;
            int j=1;
            while (!isEnd) {
                while (j<onlyNull.size() && onlyNull[j-1]>onlyNull[j]) j++;
                if (j==onlyNull.size()) {
                    onlyNull.push_back(ins1);
                    onlyNull.push_back(ins2);
                    isEnd=true;
                } else {
                    if (onlyNull[j-1]<onlyNull[j]) {
                        int sv1=onlyNull[j-2], sv2=onlyNull[j-1];
                        onlyNull[j-2]=ins1; ins1=sv1;
                        onlyNull[j-1]=ins2; ins2=sv2;
                    } else {
                        int sv1=onlyNull[j], sv2=onlyNull[j+1];
                        onlyNull[j]=ins1; ins1=sv1;
                        onlyNull[j+1]=ins2; ins2=sv2;
                    }
                    j++;
                }

            }
        }
        print(onlyNull);
    }
    if (n<6 || twoPow(n)) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        for (int i=onlyNotNull.size()+1; i<=n; i++) {
            if (twoPow(i)) {
                onlyNotNull.push_back(i);
            } else {
                onlyNotNull.insert(onlyNotNull.end()-1,i);
            }
        }
        print(onlyNotNull);
    }
    return 0;
}
