#include<bits/stdc++.h>
using namespace std;
int main()
{
	auto cmp=[](pair<int,int> p1,pair<int,int>p2){
		if(p1.first==p2.first){
			return p1.second<=p2.second;
		}
		else{
			return p1.first>p2.first;
		}
	};
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(make_pair(a,i));
		}
		sort(v.begin(),v.end(),cmp);
		vector<int> ans(n);
		int count=1;
		for(int i=0;i<n;i++){
			ans[v[i].second]=count;
			count++;
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}