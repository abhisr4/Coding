#include<algorithm>
using namespace std;
int arr[1000];
//search algorithm (for vector, arrays)
int key=10;
auto it=find(arr,arr+n,key); //returns an address
// to find the index-> substract the base address
int index=it-arr;
// if(index==n){the element is not preset in the container}

// binary search-> for sorted array
bool present=binary_search(arr,arr+n,key); //returns present or not
if(present){//present}
else {//not}

// to find the index
// lowerbound(s,r, key) and upper bound(s,e,key)

auto it=lowerbound(arr,arr+n,40);// returns the address of the first element
// for index it-arr
auto up=upper_bound(arr,arr+n,40); //returns address of element strictly greater than 40
//to find the frequency up-it

//sort function
// sort(starting adress of the container, ending_position, )
sort(arr,arr+n);
// for other sorting-> define comperator  function
sort(arr,arr+n,compare); // pass the function name as parameter
bool compare(int a,int b){
    return a>b;
}
// accept the function into another function. 
int function(int arr[],int n,bool (&compare)(int a,int b))

// problem-> next permutation
//rotate some container
rotate(arr,arr+2,arr+n); //start, rotate wtr, end index
//next permutation //next lexographically bigger number
next_permutation(arr,arr+n);
// for 1,2,3-> 1,3,2 //inplace 

swap(a,b);
reverse(arr,arr+n);

// pair class
pair<int,char> p;
// make pair


// problem:
// Activity selection problem