/*
   Author:  Luban Rahat
   Created: 2025-05-10 22:14:22 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++) {
        for(int j = i+1; j < s.size(); j++) {
            if(s[i] == '+' || s[j] == '+') {
                continue;
            } else {
                if(s[i] > s[j])
                swap(s[i],s[j]);
            }
        }
    }

    cout << s << endl;

    return 0;
}