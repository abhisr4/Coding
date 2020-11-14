#include<bits/stdc++.h>
using namespace std;
void solve(){
	int t;
	cin>>t;
	vector<vector<char>> v(t,vector<char>(t));
	char d='&', o='&';
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cin>>v[i][j];
			if(i==j)d=v[i][j];
			else o=v[i][j];
		}
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i==j || i+j==t-1){
				if(d!=v[i][j]){cout<<"NO";return;}
				else continue;
			}else{
				if(o!=v[i][j]){cout<<"NO";return;}
				else continue;
			}
		}
	}
	if(d==o){cout<<"NO";return;}
	cout<<"YES";
}
int main()
{
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
}

