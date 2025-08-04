/*
   Author:  Luban Rahat
   Created: 2025-03-31 13:33:50 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }

    return 0;
}