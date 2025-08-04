/*
   Author:  Luban Rahat
   Created: 2025-03-31 13:46:50 (GMT+06:00)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> num(4);
    for(int i = 0; i < 4; i++) {
        cin >> num[i];
    }
    sort(num.begin(),num.end());
    int a = num[3] - num[2];
    int b = num[3] - num[1];
    int c = num[3] - num[0];
    cout << a << " " << b << " " << c << endl; 

    return 0;
}