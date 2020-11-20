#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	string s;cin>>s;
	vector<pair<int,char>> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(make_pair(a,s[i]));
	}
	sort(v.begin(),v.end());
	int ans=INT_MAX;bool flag=false;int pos=-1;
	for(int i=0;i<n;i++){
		if(v[i].second=='R'){
			flag=true;
			pos=v[i].first;
		}else{
			if(flag==false)continue;
			else{
				int t=abs(v[i].first-pos);
				if(ans>t)ans=t;
			}
		}
	}
	if(ans==INT_MAX)cout<<"-1";
	else cout<<ans/2;
}
