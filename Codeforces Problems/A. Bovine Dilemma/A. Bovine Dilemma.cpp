#include<bits/stdc++.h>
using namespace std;
int main()
{
		int test;
		cin>>test;
		while(test--){
				int n;
				cin>>n;
				vector<int>v(n);
				set<float> s;
				for(auto& it:v)cin>>it;
				for(int i=0;i<n-1;i++){
						for(int j=i+1;j<n;j++){
								float x=abs(v[i]-v[j])+0.0;
								x/=2;
								s.insert(x);
						}
				}
				cout<<s.size()<<endl;
		}
}
