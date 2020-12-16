#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="ROYGBIV";
    string ans="";
    for(int i=0;i<n/7;i++){
        ans+=s;
    }
    n%=7;
    if(n==1){
        ans+="G";
    }else if(n==2){
        ans+="GB";
    }else if(n==3){
        ans+="GBI";
    }
    else if(n==4){
        ans+="ROYG";
    }else if(n==5){
        ans+="ROYGB";
    }else if(n==6){
        ans+="ROYGBI";
    }
    cout<<ans<<endl;
}