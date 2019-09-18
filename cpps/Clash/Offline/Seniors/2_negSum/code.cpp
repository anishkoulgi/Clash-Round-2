#include<bits/stdc++.h>
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define ms memset
#define MOD 1000000007
#define sp fixed<<setprecision
#define sz sizeof
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
bool pr[1000007];
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i*i<(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
ll fpow(ll x,ll y){x=x%MOD;ll res=1;while(y){if(y&1)res=res*x;res%=MOD;y=y>>1;x=x*x;x%=MOD;}return res;}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
    ll t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<ll>a(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        sum+=a[i];
        }
        vector<pair<ll,ll> >v;
        for(int i=0;i<n;i++)
        v.pb({sum-a[i],-(i+1)});
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            if(v[i].second>v[i-1].second)
            v[i].second=v[i-1].second;
        }
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        for(int i=0;i<v.size();i++)
        {
            if(m[v[i].first])
            m[v[i].first]=max(m[v[i].first],-v[i].second);
            else
            m[v[i].first]=-v[i].second;
        }
        while(q--)
        {
            ll x;
            cin>>x;
            if(m.find(x)!=m.end())
            cout<<m[x]<<"\n";
            else
            {
                it=m.lower_bound(x);
                if(it==m.begin())
                cout<<-1<<"\n";
                else
                {
                    it--;
                    cout<<it->second<<"\n";
                }
            }
            
        }
        
    }
    
}
