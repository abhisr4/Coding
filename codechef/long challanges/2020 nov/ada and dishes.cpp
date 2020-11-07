#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	if(n==1){cout<<v[0]<<endl;return;}
	int x=0;
	sort(v.begin(),v.end(),greater<int>());
	int left=0,right=0;
	for(int i=0;i<n;i++){
		if(left>right){
			right+=v[i];
		}else{
			left+=v[i];
		}
	}
	cout<<max(left,right)<<endl;
}
int main()
{
	int test=1;
	cin>>test;
	while(test--){
		solve();
	}
}
