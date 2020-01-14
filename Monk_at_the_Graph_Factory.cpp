#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll n;
  cin>>n;
  ll a[n];
  ll sum=0;

  for(ll i=0 ; i < n ; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if (sum==2*(n-1)) {
    /* code */
    cout<<"Yes";
  }
  else

  {
    cout << "No";
  }
  return 0;
}
