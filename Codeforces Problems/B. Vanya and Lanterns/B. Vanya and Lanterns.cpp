#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;double l;
    cin>>n>>l;
    vector<double> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    double ans=INT_MIN;
    for(int i=1;i<n;i++){
        ans=max(ans,abs(v[i-1]-v[i]));
    }
    ans=max(ans/2,max(v[0],abs(l-v[n-1])));
    printf("%0.9f\n",ans);
}







