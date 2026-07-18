#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int> arr,int n,int index){
    //reached the last element
    if(index == n-1){
        return true;
    }
    
    //check if condition is not correct
    if(arr[index]>arr[index+1]){
        return false;
    }
    
    return issorted(arr,n,index+1);
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
	    cin>>arr[i];
	}
	
	cout<<issorted(arr,n,0);
	
   
  
}
