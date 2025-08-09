/*
   Author:  Luban Rahat
   Created: 2025-08-09 11:22:08 (GMT+06:00)
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
        cout << (s[0]-'0') + (s[2]-'0') << endl;
    }

    return 0;
}