#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;cin>>s>>x;
	string left="",right="";
	bool flag=false;
	for(int i=0;i<x.size();i++){
		if(x[i]=='|'){flag=true;continue;}
		else if(flag==false)left+=x[i];
		else right+=x[i];
	}
	for(int i=0;i<s.size();i++){
		if(left.size()<right.size())left+=s[i];
		else right+=s[i];
	}
	if(left.size()==right.size())cout<<left<<'|'<<right;
	else cout<<"Impossible";
}

