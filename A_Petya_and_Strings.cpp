/*
   Author:  Luban Rahat
   Created: 2025-08-04 11:36:35 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin >> s1 >> s2;

    int i = 0;
    auto it1 = s1.begin(),it2 = s2.begin();
    while(true) {
        if(it1 == s1.end() && it2 == s2.end()) {
            cout << "0" << endl;
            break;
        }
        if(toupper(s1[i]) == toupper(s2[i])) {
            i++;
            it1++;
            it2++;
        } else if(toupper(s1[i]) < toupper(s2[i])) {
            cout << "-1" << endl;
            break;
        } else {
            cout << "1" << endl;
            break;
        }
    }

    return 0;
}