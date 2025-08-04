/*
   Author:  Luban Rahat
   Created: 2025-05-22 20:11:40 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;

        if(a + b == c || a + c == b || c + b == a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}