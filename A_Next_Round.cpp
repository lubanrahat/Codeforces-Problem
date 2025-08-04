#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int kthPosition = a[k-1],countNextRound = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] >= kthPosition && a[i] > 0) {
			countNextRound++;
		} 
	}
	cout << countNextRound << endl;
	
	return 0;
}