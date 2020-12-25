#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
		if(b==0)return a;
		else return gcd(b,a%b);
}
int main()
{
		int test;
		cin>>test;
		while(test--){
				int l,b;
				cin>>l>>b;
				cout<<gcd(min(l,b),max(l,b))<<endl;
		}
}
