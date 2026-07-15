#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    
    int an = n * fact(n-1);
    return an;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans = fact(n);
	cout<<ans<<endl;

}
