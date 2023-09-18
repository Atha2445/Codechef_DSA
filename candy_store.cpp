#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x){
	        cout<<(y-x)*2 + x*1<<endl;
	    }
	    else{
	        cout<<y*1<<endl;
	    }
	}
	return 0;
}
