#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int s = 0,j = 0,move = 1;
	while(!a.empty()) {
		int mx = max(a.front(),a.back());
		if(move % 2 != 0) 
			s += mx;
		else
			j += mx;
		if(mx == a.front()) 
			a.erase(a.begin());
		else
			a.pop_back();
		move++;
	}
	cout << s << " " << j << endl;
	
	return 0;
}