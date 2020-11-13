#include<bits/stdc++.h>
using namespace std;
bool rated(vector<pair<int,int>> v){
	for(int i=0;i<v.size();i++){
		if(v[i].first!=v[i].second)return true;
	}
	return false;
}
bool f(vector<pair<int,int>> v){
	for(int i=1;i<v.size();i++){
		if(v[i-1].first<v[i].first)return false;
	}
	return true;
}
void solve(){
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
	}
	if(rated(v)){cout<<"rated";}
	else if(f(v)){cout<<"maybe";}
	else{cout<<"unrated";}
}


int main()
{
	int test=1;
//	cin>>test;
	while(test--){
		solve();
	}
}
