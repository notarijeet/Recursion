#include <bits/stdc++.h>
using namespace std;
void num(int n){
    if(n==0){
        return;
    }
    
  

    num(n-1);
    cout<<n<<endl;
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	num(n);

}
