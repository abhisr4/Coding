#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		vector<int> marks(k);
		for(int i=0;i<k;i++){
			cin>>marks[i];
		}
		while(n--){
			string s;
			cin>>s;
			long long int ans=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='1'){
					ans+=marks[i];
				}
			}
			cout<<ans<<endl;
		}
	}
}