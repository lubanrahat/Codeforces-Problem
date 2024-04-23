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

  long long n,m;
  cin>>n>>m;

  int nLastDigit,mLastDigit;
  nLastDigit=n%10;
  mLastDigit=m%10;

  cout<<nLastDigit+mLastDigit<<'\n';

  return 0;
}