#include<bits/stdc++.h>
using namespace std;

//integers
#define ll long long int

//IO
#define I(X) scanf("%d",&X) //input integer
#define P(X) printf("%d",X) //output integer

#define E "\n"
//loop
#define FOR(i,n) for(int i=0;i<=n;i++)
//stl
#define v(type) vector<type>
#define p(type1,type2) pair<type1,type2>
#define map(type1,type2) unordered_map<type1,type2>
#define x (x.begin(),x.end()) 

//bit manipulation
#define setbits(x) __builtin_popcount(x)
#define setbitsll(x) __builtin_pocountll(x)
#define parity(x) __builtin_parity(x)
#define leadingzero(x) __builtin_clz(x)
#define trailingzero(x) __builtin_ctz(x)

//debug
void debug(){cout<<"Shit Life"<<E;}
#define clockSpeed 1e8
void timeT(){cerr<<"time taken "<<(float)clock()/clockSpeed<<" secs\n";}

void solve(){
    //cout<<setbits(3)<<endl; 
    
}
int main()
{
    //faster I/O in case using cin, cout
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test=1;
    I(test);
    while(test--){
        solve();
    }
    //tell the time
    //cout<<CLOCKS_PER_SEC<<endl; -> or use this
    timeT();
}
