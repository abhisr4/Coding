#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin>>s;
	string ans="";
	bool front=true;;
	for(int i=0;i<s.size();){
		string x="";int j=i;
		for(j=i;j<i+3;j++)x+=s[j];
		//cout<<"fuck: "<<x<<endl;
		if(x=="WUB"){i=j;if(front==false)ans+=" ";}
		else{
			front=false;
			ans+=s[i];i++;
		}
	}
	cout<<ans;
}
int main()
{
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
}
