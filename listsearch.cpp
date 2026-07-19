#include <bits/stdc++.h>
using namespace std;
vector<int> linear(vector<int> arr,int target,int index,int n,vector<int> list){
    if(index==n){
        return list;
    }
    
    if(arr[index]==target){
        list.push_back(index);
    }
    
    return linear(arr,target,index+1,n,list);
    
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i= 0;i<n;i++){
	    cin>>arr[i];
	}
	
	int target;
	cin>>target;
	
	vector<int> list;
	
	vector<int> ans = linear(arr,target,0,n,list);
	for(int i:ans){
	    cout<<i<<endl;
	}
	return 0;

}
