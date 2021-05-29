#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
  ll t;
  cin>>t;
  vector<ll> v[10001];
  bool check[10001]=false;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    while(m--)d
    {
      ll x,y;
      cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
    }


  }
  return 0;
}
