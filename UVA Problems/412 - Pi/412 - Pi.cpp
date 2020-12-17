#include<bits/stdc++.h>
using namespace std;
int v[51];
int n;
int gcd(int n,int m){
    if(m==0)return n;
    return gcd(m,n%m);
}
int main()
{
    //int n;
    while(cin>>n){
        if(n==0)break;
        //vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])==1)cnt++;
            }
        }
        if(cnt==0)cout<<"No estimate for this data set."<<endl;
        else{
            double x=n+0.0;
            x=x*(x-1)/2;
            double p=(x+0.0)*6.0/(cnt+0.0);
            //cout<<setprecision(6)<<sqrt(p)<<endl;
            
            printf("%0.6f\n",sqrt(p));
        }
    }
}