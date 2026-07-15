#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10) + (n/10);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int an = sum(n);
	cout<<an<<endl;
}
