#include<bits/stdc++.h>
using namespace std;
#define ll long long int
std::vector<ll> v[100005];
bool visited[100005]={false};
void dfs(ll start)
{
  cout<<"start "<<start<<"\n";
    visited[start]=true;
    for(ll xx: v[start])
    {
      if (visited[xx]==false) {
        /* code */
        dfs(xx);
      }
    }
}
int main()
{
  ll n;
  cin>>n;
  ll k;
  cin>>k;
  ll a[k][2];
  for(ll i=0;i<k;i++)
  {
    cin>>a[i][0]>>a[i][1];
  }
  ll x,ans=0;
  cin>>x;
  for(ll i=0;i<k;i++)
  {
    if (a[i][0]!=x && a[i][1]!=x) {
      /* code */
      v[a[i][0]].push_back(a[i][1]);
      v[a[i][1]].push_back(a[i][0]);
    }
  }
  for(ll i=0;i<n;i++)
  {
    if (visited[i]==false) {
      /* code */
      ans++;
      cout<<"ans "<<(ans);
      dfs(i);
    }
  }
  if (ans>1) {
    /* code */
    cout<<("Not Connected");
  }
  else
  {
    cout<<("Connected");
  }

  return 0;
}
