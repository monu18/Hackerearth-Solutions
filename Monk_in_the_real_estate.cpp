#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int  main() {
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  ll t;
  cin>>t;
  ll a[10001]={0};
  while (t--) {
    /* code */
    ll e;
    cin>>e;

      while (e--) {

        ll x,y;
        cin>>x>>y;
        a[x]=1;
        a[y]=1;
      }
      ll count=0;
      for (size_t i = 0; i < 10001; i++) {
        /* code */
        if (a[i]==1) {
          /* code */
          count++;
          a[i]=0;
        }
      }
      cout<<count<<"\n";
    }
  return 0;
}
