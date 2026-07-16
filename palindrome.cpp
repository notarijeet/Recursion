#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n,int sum = 0){

    if(n==0){
        return sum;
    }
    
    int remain = n % 10;
    sum = sum * 10 + remain;
    return reverseNum(n/10,sum);
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n == reverseNum(n)){
	    cout<<"yes its palindrome"<<endl;
	}
	else{
	    cout<<"no"<<endl;
	}
}
