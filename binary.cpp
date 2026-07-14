#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int target,int s ,int e){
    if(s>e){
        return -1;
    }
    
    int mid = s + (e-s)/2;
    
    if(arr[mid]==target){
        return mid;
    }
    
    if(target<arr[mid]){
        search(arr,target,s,mid-1);
    }
    
    return search(arr,target,mid +1,e);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
	    cin>>arr[i];
	}
	int target;
	cin>>target;
	int ans = search(arr.data(),target,0,n-1);
	cout<<ans<<endl;
}
