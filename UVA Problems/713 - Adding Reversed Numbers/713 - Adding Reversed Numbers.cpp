#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        //vector<int>x ,y;
        string x,y;
        cin>>x>>y;
        vector<int> ans(x.size()+y.size()+1);
        int i=0,j=0,carry=0,start=0;
        while(i<x.size() && j<y.size()){
            int a=x[i++]-'0',b=y[j++]-'0';
            ans[start++]=(a+b+carry)%10;
            carry=(a+b+carry)/10;
        }
        while(i<x.size()){
            int a=x[i++]-'0';
            ans[start++]=(a+carry)%10;
            carry=(a+carry)/10;
        }
        while(j<y.size()){
            int a=y[j++]-'0';
            ans[start++]=(a+carry)%10;
            carry=(a+carry)/10;
        }
        if(carry>0)ans[start++]=carry;
        i=0;
        while(i<start && ans[i]==0){i++;}
        while(i<start){
            cout<<ans[i++];
        }
        //for(int i=0;i<start;i++)cout<<ans[i];
        cout<<endl;
    }
}