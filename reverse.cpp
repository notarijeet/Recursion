#include <bits/stdc++.h>
using namespace std;
void reverse(int n){
    if(n==0){
        return;
    }
    
    int remain = n%10;
    cout<<remain<<endl;
    reverse(n/10);
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	reverse(n);
}
