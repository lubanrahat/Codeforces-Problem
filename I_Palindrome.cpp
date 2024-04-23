#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  int x=n,answer=0;
  while(x!=0) {
    int digit=x%10;
    answer=answer*10+digit;
    x/=10;
  }

  if(n==answer) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }

  return 0;
}