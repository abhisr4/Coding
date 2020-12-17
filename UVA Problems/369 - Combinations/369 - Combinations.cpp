#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ans[101][101];
int main()
{
    int n,m;
    ans[1][1]=1;
    ans[1][0]=1;
    for(ll i=2;i<=100;i++){
        ans[i][0]=1;
        for(ll j=1;j<=i;j++)
        {
            ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
        }
    }
    while(cin>>n && cin>>m){
        if(n==0 && m==0)break;
        printf("%d things taken %d at a time is %lld exactly.\n",n,m,ans[n][m]);
    }
}
