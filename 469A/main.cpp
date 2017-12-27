/*
There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

Input
The first line contains a single integer n (1 ≤  n ≤ 100).

The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. It's assumed that levels are numbered from 1 to n.

Output
If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).

Examples
input
4
3 1 2 3
2 2 4
output
I become the guy.
input
4
3 1 2 3
2 2 3
output
Oh, my keyboard!
Note
In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4], so they can pass all the levels both.

In the second sample, no one can pass level 4.
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> split(string row) {
    vector<int> sv;
    int data;
    stringstream ss(row);
    ss>>data;
    /*First adat is quantity.*/
    while (ss>>data) {
        sv.push_back(data);
    }
    return sv;
}

void print(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int findOf(vector<int> v, int value) {
    int i=0;
    while (i<v.size() && v[i]!=value) {
        i++;
    }
    return (i<v.size());
}

int main() {
    int n;
    string row;
    vector<int> littleX, littleY;
    cin>>n;
    cin.ignore();
    getline(cin,row); littleX=split(row);
    getline(cin,row); littleY=split(row);
    print(littleX);
    print(littleY);

    int i=1;
    while (i<=n && (findOf(littleX, i) || findOf(littleY, i))) {
        i++;
    }
    if (i>n) cout<<"I become the guy."; else cout<<"Oh, my keyboard!";

    return 0;
}
