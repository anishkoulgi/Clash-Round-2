#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define hell 1000000007
#define hell1 1000000006
#define pb push_back
#define x first
#define y second
#define MAXL 100005
using namespace std;
int main(){
	srand(time(0));
	ll t = 3999;
	cout << t << "\n";
	vector<ll>a;
	ll cnt = 1;
	while(t--){
		a.pb(cnt);
		cnt++;
	}
	random_shuffle(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
		cout << a[i] << "\n";
}
