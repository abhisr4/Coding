#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		long long int x,y;
		cin>>x>>y;
		long long ans=x/pow(y,2);
		int a=4;
		if(ans<=18){
			a=1;
		}else if(ans>=19 && ans<=24){
			a=2;
		}else if(ans>=25 && ans<=29){
			a=3;
		}
		cout<<a<<endl;
	}
}