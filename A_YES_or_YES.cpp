/*
   Author:  Luban Rahat
   Created: 2025-08-05 12:57:48 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
        if(s == "YES") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}