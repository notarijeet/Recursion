#include <bits/stdc++.h>
using namespace std;
void num(int n){
    if(n==0){
        return;
    }
    
  
    cout<<n<<endl;
    num(n-1);
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	num(n);

}
