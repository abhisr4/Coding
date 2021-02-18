#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	auto f=[](string s)->bool{
		for(int i=0;i<(int)s.size();i++){
			if(s[i]=='+')return true;
		}
		return false;
	};
	int count=0;
	while(n--){
		string s;
		cin>>s;
		if(f(s)){
			count++;
		}else{
			count--;
		}
	}
	printf("%d",count);
}