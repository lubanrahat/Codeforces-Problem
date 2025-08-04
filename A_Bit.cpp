/*
   Author:  Luban Rahat
   Created: 2025-08-04 12:43:06 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,count = 0;
    cin >> t;
    while(t--) {
        string s; cin >> s;
		if(s[0] == '+' || s[1] == '+') count++;
		if(s[0] == '-' || s[1] == '-') count--;
    }
    cout << count << endl;

    return 0;
}