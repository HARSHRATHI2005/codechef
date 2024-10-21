#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	
	while(t--){
	
	int x,y,z;
	cin >> x;
	cin >> y;
	cin >> z;
	
	if(y-x == z-y) {
	    cout<< "0" << endl ;
	    
	} 
	else{
	    cout<< "1" << endl;
	}
	}
	return 0;

}
