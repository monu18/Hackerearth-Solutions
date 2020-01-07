//monu
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,g;
        cin>>r>>g;
        double t=r+g,ans=0;

        if(r==0)cout<<fixed<<setprecision(6)<<1.000000<<"\n";
        else
        {
            double c=1.0;
            while(r>0 && g>=0 && t>0)
            {
                ans+= c*r/t;//
                c*= (g)*(g-1)/((t-1)*t);
                g-=2;
                t-=2;
            }
            cout<<fixed<<setprecision(6)<<ans<<"\n";
        }
    }
    return 0;
}
