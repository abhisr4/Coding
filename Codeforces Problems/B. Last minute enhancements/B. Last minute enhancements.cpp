#include<bits/stdc++.h>
using namespace std;
void solve()
{
		int n;
		cin>>n;
		vector<int> v(n);
		unordered_map<int,bool> mp;
		for(auto& it: v)cin>>it;
		sort(v.begin(),v.end());
		for(int i=n-1;i>=0;i--){
				int x=v[i];
				if(mp.find(x)==mp.end() && mp.find(x+1)==mp.end()){
						mp[x+1]=true;
				}else{
						if(mp.find(x)==mp.end())mp[x]=true;
				}
		}
		cout<<mp.size()<<endl;
}
int main()
{
		int test;
		cin>>test;
		while(test--){
				solve();
		}
}
