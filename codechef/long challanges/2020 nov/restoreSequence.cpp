#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=20*pow(10,5);
vector<ll> func(){
	bool prime[N+1];
	memset(prime,true,sizeof(prime));
	for(ll i=2;i*i<=N;i++){
		if(prime[i]){
			for(ll j=i*i;j<=N;j+=i){
				prime[j]=false;
			}
		}
	}
	vector<ll> ans;
	for(ll i=2;i<=N;i++){
		if(prime[i])ans.push_back(i);
	}
	return ans;
}
void solve(vector<ll> x){
	ll n;
	scanf("%lld",&n);
	vector<ll> v(n);
	//ll max_elem=-1;
	vector<ll> ans(n,-1);
	vector<vector<ll>> s(n+1);
	//vector<ll> ans(n);
	for(int i=0;i<n;i++){
		scanf("%lld",&v[i]);
		s[v[i]].push_back(i+1);
	}
	ll index=0;
	for(ll i=1;i<s.size();i++){
		if(s[i].size()>0){
		//	sort(s[i].begin(),s[i].end());
			for(int j=0;j<s[i].size();j++){
				ans[s[i][j]-1]=x[index];
			}
			index++;
		}
	}
	for(ll i=0;i<ans.size();i++)printf("%lld ",ans[i]);
}
int main()
{
	ll test;
	scanf("%lld",&test);
	vector<ll> x=func();
	while(test--){
		solve(x);
		printf("\n");
	}
}
