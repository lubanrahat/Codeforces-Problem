/*
   Author:  Luban Rahat
   Created: 2025-08-04 09:40:02 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    if(s[0] >= 'A' && s[0] <= 'Z') {
        cout << s << endl;
    } else {
        s[0] = toupper(s[0]);
        cout << s << endl;
    }

    return 0;
}