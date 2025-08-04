/*
   Author:  Luban Rahat
   Created: 2025-05-10 20:10:34 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    int countUpperCase = 0,countLowerCase = 0;
    for(auto it : s) {
        if(it >= 'A' && it <= 'Z') {
            countUpperCase++;
        } else {
            countLowerCase++;
        }
    }

    if(countUpperCase == countLowerCase) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    } else if(countUpperCase > countLowerCase) {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    } else {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout << s << endl;
    return 0;
}