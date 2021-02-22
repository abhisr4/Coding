#include<bits?stdc++.h>
using namespace std;
void prefixSum1D(int arr[],int n){
	vector<int> d(n);
	d[0]=arr[0];
	for(int i=0;i<n;i++){
		d[i]=arr[i]+d[i-1];
	}
}
void prefixSum2D(int **arr,int r,int c){
	int dp[r][c];
	dp[0][0]=arr[0][0];
	for(int i=1;i<r;i++){
		dp[i][0]=arr[i][0]+dp[i-1][0];
	}
	for(int i=1;i<c;i++){
		dp[0][i]=dp[0][i-1]+arr[0][i];
	}
	for(int i=1;i<r;i++){
		for(int j=1;j<c;j++){
			dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+arr[i][j];
		}
	}
}
//range query update in O(1)
// cosider a problem like-> update(l,r,x) : increase all values from
// a[l] to a[r]
// and the print the elements

vector<int> differenceArray(int arr[],int n){
	vector<int> diffArray(n+1);
	diffArray[0]=arr[0];
	for(int i=1;i<n;i++){
		diffArray[i]=arr[i]-arr[i-1];
	}
}
void update(vector<int>& diffArray,int l,int r,int x){
	diffArray[l]+=x;
	diffArray[r+1]+=x;
}
void retieveDiffArray(vector<int>& diffArray,int n){
	for(int i=0;i<n;i++){
		if(i==0){
			a[i]=diffArray[i];
		}else{
			a[i]=diffArray[i]+a[i-1];
		}
	}
}
int main()
{

}