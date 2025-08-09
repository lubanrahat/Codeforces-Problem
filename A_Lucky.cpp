/*
   Author:  Luban Rahat
   Created: 2025-08-05 13:08:36 (GMT+06:00)
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
        int firstThreeDigitSum = 0,lastThreeDigitSum = 0;
        int i = 0;
        while(i < 3) {
            firstThreeDigitSum += s[i] - '0';
            i++;
        }
        while(i < 6) {
            lastThreeDigitSum += s[i] - '0';
            i++;
        }

        cout << (firstThreeDigitSum == lastThreeDigitSum ? "YES" : "NO") << endl;
    }



    return 0;
}