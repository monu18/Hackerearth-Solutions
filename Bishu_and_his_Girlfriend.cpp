/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>v[1005];
bool visited[1005]={false};
ll ans=0;
vector<pair<ll,ll> >vv;
ll dfs(ll start, ll match)
{
    visited[start]=true;
    ans++;

    ll flag=0;
    for(ll i=0;i<v[start].size();i++)
    {

        if(visited[v[start][i]]==false)
        {
          if (v[start][i]==match) {
            /* code */
            cout<<"v[start][i] "<<v[start][i]<<" "<<"match "<<match<<"\n";
              cout<<"ans "<<ans<<"\n";
              vv.push_back(make_pair(ans,match));
            break;
            flag=1;
            //break;
            //return;
          }
          if (v[start][i]!=match)
          {
            dfs(v[start][i],match);
          }
        }
    }
    return ans;

}
int main()
{
    ll n,x,y;
    cin>>n;
    for(ll i=0;i<n-1;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll q,xx;
    cin>>q;

    for(ll i=0;i<q;i++)
    {
        ans=0;
        cin>>xx;
        ll temp=dfs(1,xx);

    }
    for (ll i = 0; i < vv.size(); i++) {
      /* code */
      cout<<vv[i].first<<" "<<vv[i].second<<"\n";

    }
    return 0;
}
