#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  long long a,b,c,d,answer;
  cin>>a>>b>>c>>d;

  answer = (a*b*c*d)%100;

  cout<<answer<<endl;

  return 0;
}