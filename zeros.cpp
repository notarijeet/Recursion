#include <bits/stdc++.h>
using namespace std;
int countzeros(int n,int cnt = 0){
    if(n==0){
        return cnt;
    }
    
    int rem = n%10;
    if(rem==0){
        cnt++;
    }
    return countzeros(n/10,cnt);
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int zero = countzeros(n);
	cout<<zero<<endl;

}
