/*
   Author:  Luban Rahat
   Created: 2025-08-04 12:41:14 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int ok = 0;

    for(int i = 0; i < n; i++) {
        int a,b,c,count1 = 0;
		cin >> a >> b >> c;
		if(a == 1) count1++;
		if(b == 1) count1++;
		if(c == 1) count1++;
		if(count1 >= 2) ok++;
    }
    cout << ok << endl;

    return 0;
}