#include<stdio.h>
void f(int *arr,int low,int mid,int high){
	int i=low,j=mid+1;
	int temp[100];
	int start=0;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j]){
			temp[start++]=arr[j++];
		}else{
			temp[start++]=arr[i++];
		}
	}
	while(i<=mid){
		temp[start++]=arr[i++];
	}
	while(j<=high){
		temp[start++]=arr[j++];
	}
	for(int i=0;i<start;i++){
		arr[low+i]=temp[i];
	}
}
void mergeSort(int *arr,int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		f(arr,low,mid,high);
	}
}
void sorting(int *arr,int n){
	//insertion sort
	/*for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>key){
				arr[j+1]=arr[j];
			}
		}
		arr[j]=key;
	}*/
	
	//merge sort
	//mergeSort(arr,0,n-1);
	
	//selection sort
	for(int i=0;i<n;i++){
		int x=arr[i];
		int index=0;
		for(int j=i+1;j<n;j++){
			if(arr[j]<x){
				x=arr[j];
				index=j;
			}
		}
		int temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
	}
}
int main()
{
	int arr[]={2,5,6,10,4,11,100,9,101};
	sorting(arr,9);
	for(int i=0;i<9;i++){
		printf("%d ",arr[i]);
	}
}
