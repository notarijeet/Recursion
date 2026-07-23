#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low ,int mid,int high){
    //create new temp
    vector<int> temp;
    int left = low;
    int right = mid+1;
    
    //merge two sorted halves array;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    
    
    //copy remaining elements from left half;
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    
    
    //copy remaining elements from right half;
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}


void mergesort(vector<int> &arr,int low,int high){
    
    if(low>=high){
        return;
    }
    

    int mid = (low + high)/2;
    
    //left side
    mergesort(arr,low,mid);
    
    //right side
    mergesort(arr,mid+1,high);
    
    //merge them
    merge(arr,low,mid,high);
}



int main() {
	// your code goes here
	vector<int> arr = {5,3,7,4};
	mergesort(arr,0,arr.size()-1);
	for(auto x:arr){
	    cout<<x<<" ";
	}
	
	return 0;

}
