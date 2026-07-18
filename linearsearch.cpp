#include <bits/stdc++.h>
using namespace std;
bool linearsearch(vector<int> &arr,int target,int n,int index){
    if(arr[index]==n){
        return false;
    }
    
    if(arr[index]==target){
        return true;
    }
    
    return linearsearch(arr,target,n,index+1);
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
	cout<<linearsearch(arr,target,n,0)<<endl;
}
