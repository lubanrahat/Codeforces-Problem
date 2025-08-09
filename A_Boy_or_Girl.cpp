/*
   Author:  Luban Rahat
   Created: 2025-08-09 10:59:27 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char,int> mp;

    for(auto it: s) {
        mp[it]++;
    }

    if(mp.size() % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }


    return 0;
}