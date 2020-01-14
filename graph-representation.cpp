#include<iostream>
using namespace std ;
#define ll long long int
int main()
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][n];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0;j<n; j++)
            {
                a[i][j]=0;
            }
         }
        for(ll i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            a[x-1][y-1]=1;
            a[y-1][x-1]=1;
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll g,h;
            cin>>g>>h;
            if(a[g-1][h-1])

            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        return 0;
    }
