#include<bits/stdc++.h>
using namespace std;
int input[100001];
void func(int a,int& x){
	if(a==x){
		for(int i=x;i>=0;i--){
			if(input[i]){
				cout<<i<<" ";
				input[i]=0;
				x=i-1;
			}else break;
		}
	}
}

void solve(){
	int n;
	cin>>n;
	int x=n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		input[a]=1;
		func(a,x);
		cout<<endl;
	}
}

int main()
{
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
}
