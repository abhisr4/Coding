#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    unordered_map<ll,ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v[a]=i;
    }
    //sort(v.begin(),v.end());
    ll m;
    cin>>m;
    ll front=0,last=0;
    while(m--){
        ll x;
        cin>>x;
        if(v.find(x)!=v.end()){
            ll pos=v[x];
            front+=pos+1, last+=n-pos;
            //cout<<pos+1<<" "<<last+1<<endl;
        }else{
            front+=n;last+=n;
        }
    }
    cout<<front<<" "<<last;
}