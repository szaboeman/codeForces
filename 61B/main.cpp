#include <iostream>
#include <string>
#include <regex>
#include <vector>

using namespace std;

string cleanString(string data) {
    regex reg("[-;_]");
    data=regex_replace(data,reg,"");
    for (int i=0; i<data.length(); i++) {
        data[i]=tolower(data[i]);
    }
    return data;
}

int main() {
    vector<string> input;
    for (int i=0; i<3; i++) {
        string data;
        cin>>data;
        input.push_back(cleanString(data));
    }
    sort(input.begin(), input.end(), [](string a, string b) {
        return a.length() > b.length();
    });
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string data;
        cin>>data;
        data=cleanString(data);
        int index=0, db=0;
        while (index<data.length() && db<3) {
            int j=0;
            while (j<input.size() &&
                   //index+input[j].length()<=data.length() &&
                   data.substr(index,input[j].length())!=input[j]) {
                j++;
            }
            if (j<input.size()) {
                index+=input[j].length();
                db++;
            } else {
                cout<<"WA"<<endl;
                break;
            }
        }

        if (index==data.length()) {
            if (db==3 && input[0].length()+input[1].length()+input[2].length()==index)
                cout<<"ACC\n";
            else
                cout<<"WA\n";
        }
    }
    return 0;
}
