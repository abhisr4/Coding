#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
long long INFF = 1000000000000000005LL;
//reading
template<typename T> void I(T &a){cin>>a;};
template<typename T,typename V> void I(pair<T,V>& a){I(a.first);I(a.second);}
template<typename T> void I(vector<T>& v){for(int i=0;i<v.size();i++)I(v[i]);}


//printing
template<typename T> void P(T a){cout<<a<<" ";}
template<typename T> void P_(T a){cout<<a<<"\n";}
template<typename T,typename V> void P(pair<T,V> a){P(a.first);P(a.second);}
template<typename T> void P(vector<T> a){for(auto it:a)P(it);}
template<typename T>void P_(vector<T> a){for(auto it:a)P_(it);}

//usefull functions
inline string IntToString(ll a){string s="";while(a>0){s+=(a%10)+'0';a/=10;}return s;}
inline ll StringToInt(string s){ll a=0;int i=s.size()-1;while(i>=0){a=a*10+(s[i]-'0');i--;}return a;}
inline string lowercase(string s){int n=s.size();for(int i=0;i<n;i++){if(s[i]>='A' && s[i]<='Z')s[i]=s[i]-'A'+'a';}return s;}
inline string uppercase(string s){int n=s.size();for(int i=0;i<n;i++){if(s[i]>='a' && s[i]<='z')s[i]+='A'-'a';}return s;}
int main()
{
	int n;I(n);
	vector<int> v(n);I(v);
	int sum=0;//ll left=0,right=0;
	unordered_map<int,bool> mp;
	for(int i=0;i<n;i++){
		if(abs(v[i])%2==0)mp[i]=true;
		v[i]/=2;
		sum+=v[i];
	}int k=0;
	if(sum>0){
		for(int i=0;i<n;i++){
			if(mp.find(i)==mp.end() && v[i]<0 && k<sum){v[i]--;k++;}
		}
		P_(v);
	}else if(sum<0){
		sum=abs(sum);
		for(int i=0;i<n;i++){
			if(mp.find(i)==mp.end() && v[i]>0 && k<sum){v[i]++;k++;}
		}
		P_(v);
	}else P_(v);
}
