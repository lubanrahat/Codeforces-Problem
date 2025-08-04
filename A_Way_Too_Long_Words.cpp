/*
   Author:  Luban Rahat
   Created: 2025-08-04 12:38:45 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s.size() < 10) {
            cout << s << endl;
        } else {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }
    }

    return 0;
}