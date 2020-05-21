#include<bits/stdc++.h>
using namespace std;
#define ll long long int
std::vector<ll> v[100001];
bool check[100001]={false};

ll ans=0;
void dfs(ll start) {
  /* code */
  check[start]=true;
  //ans++;
  for (ll i = 0; i < v[start].size(); i++) {
    /* code */
    if (check[v[start][i]]==false) {
      /* code */
      dfs(v[start][i]);
    }
  }
}
int main() {

  ll n,m;

  ll x;

  cin>>n>>m;

  while (m--) {
    /* code */
    ll a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  cin>>x;
  dfs(x);
  //cout<<(n-ans)<<"\n";
  for(ll i=1;i<100001;i++)
  {
    if (check[i]==true) {
      /* code */
      ans++;
    }
  }
  cout<<(n-ans);
  return 0;
}
