#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n*x >= 10000 && n*x <= 99999){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
