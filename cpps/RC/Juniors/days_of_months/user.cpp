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
	ll t;
	cin>>t;
	assert(1<=t&&t<=100);
	while(t--)
{
	ll x;
	cin>>x;
	assert(1<=x&&x<=100);
	if(x==1)
	cout<<"31\n";
	else if(x==2)
	cout<<"28/29\n";
	else if(x==3)
	cout<<"31\n";
	else if(x==4)
	cout<<"30\n";
	else if(x==5)
	cout<<"31\n";
	else if(x==6)
	cout<<"30\n";
	else if(x==7)
	cout<<"31\n";
	else if(x==8)
	cout<<"31\n";
	else if(x==9)
	cout<<"30\n";
	else if(x==10)
	cout<<"31\n";
	else if(x==11)
	cout<<"30\n";
	else if(x==12)
	cout<<"31\n";
	else
	cout<<"Invalid\n";
}

}
